#include<iostream>
using namespace std;
class Overloading
{

private:
    int x;
public:
    Overloading(int y=0)
    {x = y;}
    int getX90
    {return x;}
    Overloading operator * (Overloading & );
    bool operator >= (Overloading & );
    Overloading operator --();
};
