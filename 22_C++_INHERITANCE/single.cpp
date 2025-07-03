#include<iostream>
#include<string>
using namespace std;

//    _______
//   |       |
//   |   A   |
//   |_______|
//       |
//       |
//    _______
//   |       |
//   |   B   |
//   |_______|    

class Car{
    public:
    string wheel = "Alloy wheel";
    string body= "carbon body";
    string window = "glass";
     
};                                

class Tata :public Car{
    public:
    string engine = "petrol";
    int price = 1500000;

    void getdetails(){
        cout << "engines:"<< this->engine << endl;
        cout << "price :" << this-> price << endl;
        cout << "body :" << body << endl;
        cout << "window :" << window << endl;
    }
};

int main(){

    Tata c1;

    c1.getdetails();

    return 0;
}