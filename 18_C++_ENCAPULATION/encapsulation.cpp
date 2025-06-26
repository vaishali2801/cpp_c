#include<iostream>
#include<string>
using namespace std;

class encapsulation{

    private:
      int price;
      float rate;  
    public:
    void setter(int p,float r)
    {
        this->price = p;
        this->rate = r;
    }
    void getter()
    {
        cout <<"price :"<< this->price << endl;
        cout <<"rate :" <<  this->rate << endl;
        cout << this << endl;
    }

    // void setter(int p,float r)
    // {
    //    price = p;
    //    rate = r;
    // }
    // void getter()
    // {
    //     cout << price << endl;
    //     cout << rate << endl;
    // }
};

int main(){
    encapsulation v1,v2;

    int price;
    float rate;

    cout << "Enter price :";
    cin >> price;
    cout << "Enter rate :";
    cin >> rate;

    v1.setter(price,rate);
    v1.getter();

    cout <<"---------------------------"<< endl;

    v2.setter(800,3.4);
    v2.getter();

    return 0;
}