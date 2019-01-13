//Function declaration
//template <class T>
//T somefunction(T arg){
//
//}
#include<iostream>
using namespace std;

template <class T>
T Large(T n1, T n2)
{
    return (n1 > n2) ? n1 : n2;
}
int main()
{
    int i1, i2;
    float f1, f2;
    char c1, c2;

    cout<<"Enter Two Integers:\n";
    cin>>i1>>i2;
    cout<<Large(i1,i2)<<" is Large."<<endl;
    cout<<"\n Enter Two floating-Point Numbers:\n";
    cin>>f1>>f2;
    cout<<Large(f1,f2) <<" is Larger." <<endl;
    cout<<"\nEnter two characters:\n";
    cin>>c1>>c2;
    cout<<Large(c1,c2)<<" has larger ASCII value.";
}
