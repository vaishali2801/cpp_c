#include<iostream>
#include<string>

using namespace std;


class Object{

    public:
    void showing(){
        cout << "show the data" << endl;
    }
    void showing(int day){
        cout << "show " << day << " days the data" << endl;
    }
    void showing(string days){
        cout << "show " << days << " days the data" << endl;
    }
    void showing(int days , int data){
        cout << "show " << days << " days "<< data << " data" << endl;
    }
};

int main(){

    Object obj1;
    obj1.showing();
    obj1.showing(25);
    obj1.showing("twenty");
    obj1.showing(23, 4789);


    return 0;
}