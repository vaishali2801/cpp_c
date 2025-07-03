#include<iostream>
#include<string>
using namespace std;            
//            _______
//           |       |
//           |   A   |
//           |_______|    
//               |
//        _______|_______  
//       |               |
//       |               |
//    ___|___         ___|___
//   |       |       |       |
//   |   B   |       |   C   |
//   |_______|       |_______|      



class Vehical{
    public:
    void engin(){
       cout << "petrol engine..!" << endl;
    }
   
};
class Car :public Vehical{
    public:
    int wheel = 4;
    string size = "big";
    
};

class  Bike: public Vehical{
    public:
    int wheel = 2;
    string size = "smaller than car";

};

int main(){

  Bike b1;
  cout << b1.wheel << endl;
  b1.engin();
  

    return 0;
}