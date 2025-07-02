#include<iostream>
#include<string>
using namespace std;

class Employee{

    int id;
    static int count;
    public:
    void setdata(void){
        cout << "enter id: ";
        cin >> id;
        count++;

    }
    void getdata(void){
        cout << "id of employee is " << id << " and number is :" << count << endl;
    }

};
int Employee::count= 7;

int main(){

    Employee rohan, mit , parth;

    rohan.setdata();
    rohan.getdata();

    mit.setdata();
    mit.getdata();

    parth.setdata();
    parth.getdata();

    return 0;
}