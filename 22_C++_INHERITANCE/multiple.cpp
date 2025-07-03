#include<iostream>
#include<string>
using namespace std;


//    _______         _______
//   |       |       |       |
//   |   A   |       |   B   |
//   |_______|       |_______|      
//       |               |
//       |               |
//       |_______________|
//               |
//            ___|___
//           |       |
//           |   C   |
//           |_______|    


class Dog {
    public:
    string food = "non-veg..";
   void bark(){
    cout <<" puppy can bark...!" << endl;
   }
    
};

class  Cat{
    public:
    string food = "non-veg";
   void meow(){
    cout << "kitty can meow...!" << endl;
   }

};
class pet : public Dog , public Cat{

};

int main(){

    pet kitty, puppy;

    kitty.meow();
     cout << kitty.Cat::food << endl;
    puppy.bark();
    cout << puppy.Dog::food << endl;

    return 0;
}