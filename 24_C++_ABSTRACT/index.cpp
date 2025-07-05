#include<iostream>
#include<string>
using namespace std;

class Tata{

    public:

    virtual void getrevenue() = 0;
    void Employyee(){
        cout << 150000 << "empoyees..!" << endl;
    }
};
class Tatasteel:public Tata {
    public :
    void getrevenue(){
        cout << "1300 revenue this year" << endl;
    }
};
class TataMotors:public Tata {
    public :
    void getrevenue(){
        cout << "1500 revenue this year" << endl;
    }
};

int main(){

    TataMotors t1;
    t1.getrevenue() ;
    Tatasteel s1;
    s1.getrevenue();
    return 0;
}