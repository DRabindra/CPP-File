#include<iostream>
using namespace std;


class A
{
    public:
           int a, b;
                void userinput()
                {
                        cout<<" Enter First Number : ";
                        cin>>a;
                        cout<<" Enter Second Number : ";
                        cin>>b;
                }
};
class c: public A
{
                int sum;
      s public:
                void add()
                {
                        sum = a + b;
                }
                void display()
                {
                        cout<<"\n Addition of Two Numbers : "<<sum;
                }
};
int main()
{
        c a;
        a.userinput();
        a.add();
        a.display();
        return 0;
}
