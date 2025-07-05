#include<iostream>
#include<string>

using namespace std;


class Object{

    public:
    void showing(int days , string data){
        cout << "show " << days << " days "<< data << " data" << endl;
    }
};
class Med:public Object{
     public:
    void showing(int days , string data){
        cout << "show " << days << " days "<< data << " data" << endl;
    }
};
class small:public Object{
     public:
    void showing(int days , string data){
        cout << "show " << days << " days "<< data << " data" << endl;
    }
};

int main(){

    Object obj1;
    Med mobj;
    small sobj;
   
    obj1.showing(36,"many");
    mobj.showing(45,"large");
    sobj.showing(14,"small");

    return 0;
}