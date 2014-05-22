#include <stdlib.h>

#include "date.h"
#include "utils.h"

DDI::Date::Date()
{
}


DDI::Date::Date(int _year, unsigned int _month, unsigned int _day)
{
    year = _year;
    month = (char)_month;
    day = (char)_day;
}

DDI::Date::Date(std::string _date)
{
    std::vector<std::string> pieces = DDI::Utils::explode(_date, "-");
    year = atoi(pieces[0].c_str());
    month = (char)atoi(pieces[1].c_str());
    day = (char)atoi(pieces[2].c_str());
}

DDI::Date::Date(const DDI::Date &_date)
{
    year = _date.getYear();
    month = (char)_date.getMonth();
    day = (char)_date.getDay();
}

unsigned int DDI::Date::getDay() const {
    return (int)day;
}

unsigned int DDI::Date::getMonth() const {
    return (int)month;
}

int DDI::Date::getYear() const {
    return year;
}
