#include "data.h"

Data::Data(string n):
    name{n}
{

}

string Data::getName() const
{
    return name;
}

void Data::setName(string n)
{
    n = name;
}

bool operator ==(const Data &d1, const Data &d2)
{
    return (d1.name == d2.name);
}

ostream &operator <<(ostream &os, const Data &d)
{
    os << d.name;
    return os;
}
