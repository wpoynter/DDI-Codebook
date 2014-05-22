#include "utils.h"

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
    return "";
}

const char *DDI::Utils::implode(std::vector<const char*> str, const char *glue)
{
    return "";
}
