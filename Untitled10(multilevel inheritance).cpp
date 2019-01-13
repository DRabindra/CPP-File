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
class C: public B{
    public:
     C(){
     cout<<"constructor of C class"<<endl;
     }
};
int main(){
    C obj;
    B obj1;
    return 0;
}

