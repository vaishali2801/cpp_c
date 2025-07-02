#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int grid;
    int roll;
    string password;

    public:
    // constructed 
    student(int id)
    {
        this->grid = id;
        this->name = "krishna";
        this->roll = 9;
        this->password = "krishna7";
        cout << "object is constructed...!"<< endl;

    }
    student(){
        this->grid = 171;
        this->name ="-";
        this->password= "-";
        this->roll = 1;
        cout << "constructed" << endl;
    }
    //  destructed 
    ~student()
    {
        cout << "object is destructed...!"<< endl;

    }
    void setdata(string name , string password,int roll){
        this->name = name;
        this->password = password;
        this->roll = roll;
    }
    void getdata(){
       cout << this->name << endl;
       cout << this->password << endl;
       cout << this->roll << endl;
    }

};

int main(){

    student std1(7),std2(8),std3(9),std4;

    std1.setdata("bhoomi","bhoomi77",8);
    std1.getdata();
    std2.getdata();
    std4.getdata();

    return 0;
}