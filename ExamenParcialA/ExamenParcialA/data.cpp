#include <iostream>
#include "data.h"

using namespace std;


Data::Data(int v,string im):
    value{v},
    imaginary{im}
{

}

Data::Data(Data *d)
{
    value = d->getValue();
    imaginary = d->getImaginary();
}

string Data::getImaginary() const
{
    return imaginary;
}

void Data::setImaginary(string im)
{
    imaginary = im;
}


int Data::getValue() const
{
    return value;
}

void Data::setValue(int value)
{
    value = value;
}

void Data::print() const
{
    cout << value <<" "<<imaginary<< endl;

}

bool operator >(Data const & d1, Data const & d2)
{
    return d1.getValue() > d2.getValue();
}

bool operator <(Data const & d1, Data const & d2)
{
    return d1.getValue() < d2.getValue();
}

bool operator ==(Data const & d1, Data const & d2)
{
    return d1.getValue() == d2.getValue();
}

bool operator !=(Data const & d1, Data const & d2)
{
    return d1.getValue() != d2.getValue();
}

bool operator >=(Data const & d1, Data const & d2)
{
    return d1.getValue() >= d2.getValue();
}

bool operator <=(Data const & d1, Data const & d2)
{
    return d1.getValue() <= d2.getValue();
}
