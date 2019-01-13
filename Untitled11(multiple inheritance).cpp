#include<iostream>
using namespace std;
class A{
    public:
     A(){
        cout<<"constructor of A class"<<endl;
     }
};
class B{
    public:
     B(){
     cout<<"constructor of B class"<<endl;
     }
};
class C: public A, public B{
    public:
     C(){
     cout<<"constructor of C class"<<endl;
     }
};
int main(){
    C obj;
   // B obj1;
    return 0;
}

