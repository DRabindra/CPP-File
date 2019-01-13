#include<iostream>
using namespace std;
class A
{
    protected:
        int roll;
        char name[30];
        char gender[5];
    public:
        void setdata();
};
void A:: setdata(){
cout<<"enter the roll no of student: ";
cin>>roll;
cout<<"enter the name of student: ";
cin>>name;
cout<<"enter the gender of student: ";
cin>>gender;
}
class B{
protected:
    int mark1,mark2,mark3;
public:
    void setdetails();
};
void B:: setdetails()
{
    cout<<"enter the mark of 3 Subject";
    cin>>mark1>>mark2>>mark3;

}
class C:public A, public B
{

protected:
    int total;
public:
    void display();
};
void C::display()
{
    total=mark1+mark2+mark3;
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<gender<<endl;
    cout<<mark1<<endl;
    cout<<mark2<<endl;
    cout<<mark3<<endl;
    cout<<total<<endl;
}
int main(){
C obj1;
obj1.setdata();
obj1.setdetails();
obj1.display();
return(0);
}
