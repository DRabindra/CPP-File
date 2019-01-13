#include<iostream>
using namespace std;
class Complex
{
private:
int a,b;
public:
void setdata(int x, int y)
{
a=x;
b=y;
}

void display(){
cout<<a<<endl;
cout<<b<<endl;
}
friend void fun(Complex c);
};
void fun(Complex c)
{


    cout<<c.a+c.b<<endl;
}
int main()
{
   Complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(4,5);
    fun(c1);
    fun(c2);
    }
