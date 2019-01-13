#include<iostream>
using namespace std;
class B;
class A{
private:
int g;
public:
void setdata(int x)
{
g=x;
}

void display(){
cout<<g<<endl;
}
friend void fun(A, B);
};

class B{
private:
int h;
public:
void setdata(int y)
{
h=y;
}

void display(){
cout<<h<<endl;
}
friend void fun(A,B);
};

void fun(A b1,B b2)
{
    cout<<b1.g+b2.h;
}
int main()
{
    A b1;
    B b2;
     b1.setdata(-2);
    b2.setdata(-4);
    fun(b1,b2);
    }
