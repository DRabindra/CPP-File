#include<iostream>
using namespace std;

class Square{
    private:
        double side;
    public:
        Square(double);
        Square(const Square &len);
};
Square::Square(double len){
    this->side=len;
    cout<<"Inside the para. cons."<<side<<endl;
}

Square::Square(const Square &len){
cout<<"Insidethe copy. cons."<<&len;
//side=side;
side=len.side;
}
int main(){
Square sq(10.0);
Square sq2=sq;
return 0;
}
