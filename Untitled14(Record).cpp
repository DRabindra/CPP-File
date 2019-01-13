//Write a c++ program to define a base class Item(item*no, name,price). Derive a class Discounted*Item (discount*pecent).
//A ccustomer purchases 'n' items display the item*wise bill and total amount using appropriate format.
#include<iostream>
using namespace std;

class ItemDetails
{
    public:
        int Employee_no;
        char Name[50];
        float Phone_no=0;
};


class Person     //Base Class
{
    protected:
char pname[50], address[100];
        int phone_no;
};
//Class Employee - Derived Class. Derived from Class Person and Base Class of Manager
class Employee : public Person
{
    public:
        int eno;
        char ename[50];
};
class Manager : public Employee  //Class Manager - Derived Class. Derived from Class Employee
{
    public:
        char designation[50], deptname[100];
        float basic_salary;
    public:
        void accept_details()
        {
                cout<<"\n Enter Details of Manager ";
                cout<<"\n -------------------------- ";
                cout<<"\n Enter Employee No. : ";
                cin>>eno;
                cout<<"\n Enter Name : ";
                cin>>ename;
                cout<<"\n Enter Address : ";
                cin>>address;
                cout<<"\n Enter Phone No. : ";
                cin>>phone_no;
                cout<<"\n Enter Designation : ";
                cin>>designation;
                cout<<"\n Enter Department Name : ";
                cin>>deptname;
                cout<<"\n Enter Basic Salary : ";
                cin>>basic_salary;
        }
};
int main()
{
        int i,cnt,temp;
        Manager man[100];
        cout<<"\n How Many Managers You Want to Enter? : ";
        cin>>cnt;          //Accept details for 'n' managers
        for(i=1;i<=cnt;i++)
        {
                man[i].accept_details();
        }
        temp=0;
        for(i=1;i<=cnt;i++)
        {
                if(man[temp].basic_salary<man[i].basic_salary)
                temp=i;
        }
        cout<<"\n Manager with Highest Salary is : \n"<<man[temp].basic_salary;
        cout<<" \n And, Manager Name is : "<<man[temp].ename;
        return 0;
}
