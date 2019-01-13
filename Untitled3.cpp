#include<iostream>
using namespace std;
class Line{
public:
    int getLength( void);
    Line(int Len);      //simple destructor
    Line(const Line &obj);   //copy constructor //&obj is calling the reference or passing it
    ~Line();            //destructor
private:
    int *ptr;
};
Line::Line(int Len){
    cout<<"Normal constructor allocating ptr"<<endl;
    ptr= new int;
    *ptr= Len;

}
Line::Line(const Line &obj){
    cout<<"copy constructor allocating ptr."<<&obj<<endl;
    ptr=new int;
    *ptr=*obj.ptr;
}
Line::~Line(void){
    cout<<"Freeing Memory!"<<endl;
    delete ptr;
}
int Line::getLength(void){
    return *ptr;
}
void display (Line obj){
    cout<<"Length of Line:"<<obj.getLength()<<endl;
}
int main(){
    Line line(10);
    display(line);
    return 0;
}
