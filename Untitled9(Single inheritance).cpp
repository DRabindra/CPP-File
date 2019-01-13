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
     cout<<"constructor of B class";
     }
};
int main(){
    B obj;
    return 0;
}
