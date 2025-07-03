#include<iostream>
#include<string>
using namespace std;


//    _______
//   |       |
//   |   A   |
//   |_______|
//       |
//       |
//    ___|___
//   |       |
//   |   B   |
//   |_______|    
//       |
//       |
//    ___|___
//   |       |
//   |   C   |
//   |_______|    


class Animal{
    public:
    string habit = "eating so much..!";
};
class Dog :public Animal{
    public:
   void bark(){

   }
    
};

class  pitbull: public Dog{
    public:
    string mouth = "bigger";

};

int main(){

   pitbull b1;

   cout << b1.habit << endl;
   cout << b1.mouth << endl;


    return 0;
}