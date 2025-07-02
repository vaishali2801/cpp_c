#include<iostream>
#include<string>
using namespace std;

class Object{

    public:
    string name;
    string password;
//  constructed 
    Object(string name, string pass){
        this->password = pass;
        this->name = name;
    }
    // copy of constructor 
    Object(const Object &obj1){
        this->name = obj1.name;
        this->password = obj1.password;
    }
   
};

int main(){

    Object obj1("Radha","7777"),obj2(obj1);
    Object obj3("bhoomi","777"),obj4(obj3);

    cout << "obj1-name :" << obj1.name << endl;
    cout << "obj1-pass :" <<  obj1.password << endl;
    cout << "----------------------------------" << endl;
    cout << "obj2-name :" << obj2.name << endl;
    cout << "obj2-pass :" <<  obj2.password << endl;
    cout << "----------------------------------" << endl;

    cout << "obj3-name :" << obj3.name << endl;
    cout << "obj3-pass :" <<  obj3.password << endl;
    cout << "----------------------------------" << endl;
    cout << "obj4-name :" << obj4.name << endl;
    cout << "obj4-pass :" <<  obj4.password << endl;

    return 0;
}
