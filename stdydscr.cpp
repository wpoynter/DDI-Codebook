#include "stdydscr.h"

const std::string DDI::StdyDscr::_label_ = "stdyDscr";

DDI::StdyDscr::StdyDscr(std::string _ID)
{
    ID = _ID;
}

std::string DDI::StdyDscr::getXMLLabel() {
    return _label_;
}
