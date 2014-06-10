#include "utils.h"

#include <sstream>

std::vector<std::string> DDI::Utils::explode(std::string str, std::string delim)
{
    size_t pos = 0;
    std::vector<std::string> fragments;
    while ((pos = str.find(delim)) != std::string::npos) {
        fragments.push_back(str.substr(0, pos));
        str.erase(0, pos + delim.length());
    }
    fragments.push_back(str);
    return fragments;
}

std::vector<const char*> DDI::Utils::explode(const char *str, const char *delim)
{
    size_t pos = 0;
    std::vector<const char*> fragments;
    std::string s_str(str), s_delim(delim);
    while ((pos = s_str.find(s_delim)) != std::string::npos) {
        fragments.push_back(s_str.substr(0, pos).c_str());
        s_str.erase(0, pos + s_delim.length());
    }
    fragments.push_back(s_str.c_str());
    return fragments;
}

std::string DDI::Utils::implode(std::vector<std::string> str, std::string glue)
{
    std::stringstream ss;
    for (std::vector<std::string>::iterator iter = str.begin(); iter != str.end(); iter++) {
        ss << *iter << glue;
    }
    std::string output(ss.str());
    output.erase(output.length()-glue.length());
    return output;
}

const char *DDI::Utils::implode(std::vector<const char*> str, const char *glue)
{
    std::stringstream ss;
    for (std::vector<const char*>::iterator iter = str.begin(); iter != str.end(); iter++) {
        ss << *iter << glue;
    }
    std::string output(ss.str());
    output.erase(output.length()-std::char_traits<char>::length(glue));
    return output.c_str();
}


std::string DDI::Utils::indent(int level, char c)
{
        std::stringstream output;
        for(int i = 0; i < level; i++)
            output << c;
        return output.str();
}
