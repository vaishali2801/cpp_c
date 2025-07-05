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
//       |               |
//       |               |
//       |_______________|
//            ___|___
//           |       |
//           |   D   |
//           |_______|    


class Person{
    public:
   
};
class student :public Person{
    public:
   string name ="vaishali";
   int id= 3456;
   void all(){
    cout << name << "student...! "<< endl;
   }
    
};

class  Employee: public Person{
    public:
   string name ="dharm";
   int id= 4875;

};
class parttimestudent: public student , public Employee{
    public:
    string name = "bhoomi";
    int id = 8475;
};

int main(){

    parttimestudent s1,E1;
     cout << s1.student::name << endl;
  

    return 0;
}