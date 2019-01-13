#include <iostream>
using namespace std;
class Box{
private:
    double length;
    double breadth;
    double height;
public:
    double getVolume(void){
    return length*breadth*height;
    }
    void setLength(double len){
    length = len;
    }
    void setBreadth(double br){
    breadth = br;
    }
    void setHeight(double he){
    height = he;
    }
Box operator+(const Box& b){
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}
};
int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;
    Box1.setLength(5.0);
    Box1.setHeight(5.0);
    Box1.setBreadth(5.0);

    Box2.setLength(5.0);
    Box2.setHeight(5.0);
    Box2.setBreadth(5.0);

    volume= Box1.getVolume();
    cout<<"The volume of Box1: "<<volume<<endl;
    volume= Box1.getVolume();
    cout<<"The Volume of Box2: "<<volume<<endl;
    Box3 = Box1 + Box2;
    volume=Box3.getVolume();
    volume = Box3.getVolume();
    cout<<"The Volume of Both Box1 and Box2: "<<volume<<endl;
    return 0;
    }

































//Box operator+(const Box&); //same class member
//Box operator+(const Box&, const Box&); // non member function
