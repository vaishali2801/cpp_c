#include<iostream>
#include<string>
using namespace std;

class Object{

    private:
    string name;
    string course;
    int GRid;
    public:
    Object(){
        this->GRid = 9035;
        this->name ="-";
        this->course="-";
        cout << "object is constucted" << endl;
    }
    ~Object(){
        this->GRid = 0;
        cout << "object is destucted" << endl;
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

    Object obj1,obj2;

    obj1.setdata("vaishali","gim");
    obj1.getdata();
    obj2.setdata("bhoomi","ui/ux");
    obj2.getdata();

   


    return 0;

}
