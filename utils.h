#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

namespace DDI {

namespace Utils {

    std::vector<std::string> explode(std::string str, std::string delim = " ");
    std::vector<const char *> explode(const char* str, const char *delim = " ");
    std::string implode(std::vector<std::string> str, std::string glue = " ");
    const char* implode(std::vector<const char*> str, const char *glue = " ");
    std::string indent(int level, char c = '>');
}

}

#endif // UTILS_H
