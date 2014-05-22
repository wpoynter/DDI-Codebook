#ifndef DATE_H
#define DATE_H

#include <string>

namespace DDI {

class Date
{
private:
    char day;
    char month;
    int year;
public:
    Date();
    Date(int _year, unsigned int _month, unsigned int _day);
    Date(std::string _date);
    Date(const Date &_date);

    unsigned int getDay() const;
    unsigned int getMonth() const;
    int getYear() const;
};

}

#endif // DATE_H
