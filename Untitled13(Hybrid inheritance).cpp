
#include<iostream>
using namespace std;
class A{
    public:
     A(){
        cout<<"constructor of A class"<<endl;
     }
};
class B: public A{
    public:
     B(){
     cout<<"constructor of B class"<<endl;
     }
};
class C: public A{
    public:
     C(){
     cout<<"constructor of C class"<<endl;
     }
};
class D: public B, public C{
    public:
     D(){
     cout<<"constructor of D class"<<endl;
     }
};
int main(){
    D obj;
    return 0;
}

