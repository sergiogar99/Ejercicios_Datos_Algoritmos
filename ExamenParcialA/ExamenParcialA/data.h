#ifndef DATA_H
#define DATA_H

#include<string>

using namespace std;


class Data
{
public:

    Data(int v,string im);
    Data(Data* d);

    int getValue() const;
    void setValue(int value);

    string getImaginary() const;
    void setImaginary(string im);

    void print() const;

private:
    int value;
    string imaginary;
};

bool operator > (Data const & d1, Data const & d2);
bool operator < (Data const & d1, Data const & d2);
bool operator == (Data const & d1, Data const & d2);
bool operator != (Data const & d1, Data const & d2);
bool operator <= (Data const & d1, Data const & d2);
bool operator >= (Data const & d1, Data const & d2);

#endif // DATA_H
