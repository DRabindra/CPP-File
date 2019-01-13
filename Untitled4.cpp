#include<iostream>
using namespace std;
class Square{
public:
    double getSide( void);
    Square(double Side);      //simple destructor
    Square(const Square &obj);   //copy constructor //&obj is calling the reference or passing it
  //  ~Square();            //destructor
private:
    double *side;
};
Square::Square(double Side){
    cout<<"Normal constructor allocating side"<<endl;
    side= new double;
    *side= Side;

}
Square::Square(const Square &obj){
    cout<<"copy constructor allocating side."<<&obj<<endl;
    side=new double;
    *side=*obj.side;
}/*
Square::~Square(void){
    cout<<"Freeing Memory!"<<endl;
    delete side;
}*/
double Square::getSide(void){
    return *side;
}
void display (Square obj){
    cout<<"Side of Square:"<<obj.getSide()<<endl;
}
int main(){
    Square Square(10*10);
    display(Square);
    return 0;
}

//201506 Q.1
//b.write a function definition for setSide() function, to
//throw an exception class if value entered by
//user is a negative?
//c.if the square class has a copy constructor
//prototype as following:
//square (const Square &);
//write its copy constructor definition?
