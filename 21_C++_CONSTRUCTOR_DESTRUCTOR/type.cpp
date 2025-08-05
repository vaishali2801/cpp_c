#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
    string name;
    string dept;
    string subject;

    // Teacher(){ // non parameterized

    //     cout << "hi i'm constructor" << endl;
    // }
    Teacher(string n ,string s,string d,double sal){ // parameterized

        this->name = n;
        this->dept = d;
        this->subject = s;
        this->salary = sal;
    }
    //copy constructor
    Teacher(Teacher &obj){
        this->name = obj.name;
        this->subject = obj.subject;
        this->dept = obj.dept;
        this->salary = obj.salary;
        cout << "i'm copy of constructor" << endl;
    }
    void changedept(string newdept){
        dept = newdept;

    }
    void setsalary(double s){
        salary = s;
    }
    double getsalary(){
        return salary;
    }
    void getinfo(){
        cout << "hello" << endl;
    cout << name << endl;
    cout << subject << endl;
    cout << dept << endl;
    cout << getsalary() << endl;
    }
    ~Teacher(){
        cout << "hi i'm destructor" << endl;
    }
};
int main(){
    Teacher t1("vaishali" ,"c++" , "IT" ,24000);
    Teacher t2(t1); // copy of constructor
    t1.getinfo();
    t2.getinfo();
    // t1.name = "vaishali";
    // t1.subject = "c++";
    // t1.dept = "information technology";
    // t1.setsalary(25000);

    return 0;
}