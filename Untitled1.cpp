#include<iostream>
using namespace std;
class Box{
private:
    double length;
    double breadth;
    double height;
public:
    double setVolume(float,float,float);
    double getVolume(void);
    void display();
   // double c;
};
double Box::setVolume(float a, float b, float c){
    this->length=a;
    this->breadth=b;
    this->height=c;

}

double Box::getVolume(){

cout<<length*breadth*height;
return length*breadth*height;
}
    int main()
{
    double w;
    double y;
    double z;
    cout<<"Enter any number: "<<endl;
    cin>>w;
    cout<<"Enter any number: "<<endl;
    cin>>y;
    cout<<"Enter any number: "<<endl;
    cin>>z;
    Box b1;
    b1.setVolume(w,y,z);
    b1.getVolume();


    return 0;
}


