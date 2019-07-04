#include "data.h"

Data::Data(int d):
    value{d}
{

}

int Data::getValue() const
{
    return value;
}

void Data::setValue(int v)
{
    value = v;
}

std::ostream &operator <<(std::ostream &os, const Data &d)
{
    os << d.value;
    return os;
}
