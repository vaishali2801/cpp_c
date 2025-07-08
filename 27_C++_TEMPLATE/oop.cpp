#include<iostream>
#include<string>
using namespace std;

template <typename T1,typename T2>

class Myclass{
    private:
    T1 n1;
    T2 n2;
    public:
    Myclass(T1 n1,T2 n2){
        this->n1 = n1;
        this->n2 = n2;
    }
    T2 mul(){
        return this->n1*this->n2;
    }
    T2 sum(){
        return this->n1+this->n2;
    }

};
int main(){
    Myclass <double ,int>obj1(55.8,20);
    Myclass <string , string>obj2("vaishali" ,"chauhan");

    cout << obj1.mul() << endl;
    cout << obj2.sum() << endl;

    return 0;
}