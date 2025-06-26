#include<iostream>
#include<string>
using namespace std;


class Enc{

    private:
    int password;
    string email;
    public:
    void setter(int pass, string em){
        this->password = pass;
        this->email = em;
    }
    void getter(){
        cout << this->password << endl;
        cout << this->email<< endl;
        cout << this << endl;
    }
};

int main(){

    int password;
    string em;

    Enc v1,v2;

    cout << "Enter password :";
    cin >> password;
    cout << "Enter email :";
    cin >> em;

    v1.setter(password,em);
    v1.getter();

    cout << "--------------------------" << endl;

    return 0;
}