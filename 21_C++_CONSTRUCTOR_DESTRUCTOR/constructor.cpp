#include<iostream>
#include<string>
using namespace std;

class Object{

    private:
    string name;
    string course;
    int GRid;
    public:
    // constructor 
    Object(){
        this->GRid = 9035;
        this->name ="-";
        this->course="-";
        cout << "object is constucted" << endl;
    }
    // destructor 
    ~Object(){
        this->GRid = 0;
        cout << "object is destucted" << endl;
    }
    // constructor with parameters 
    Object(int id){
        this->GRid = id;
        this->name ="-";
        this->course ="-";
    }

    void setdata(string name,string course){
        this->name = name;
        this->course= course;
    }
    
    void getdata(){
        cout << this->GRid << endl;
        cout << this->name << endl;
        cout << this->course << endl;
    }
};

int main(){

    Object obj1(2),obj2(3),obj4;

    obj1.setdata("vaishali","gim");
    obj1.getdata();

   obj4.setdata("krishna","gim");
   obj4.getdata();


    return 0;

}
