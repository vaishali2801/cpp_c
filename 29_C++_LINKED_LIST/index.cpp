#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Std{
    public:
    int id;
    string name;

    Std(int id , string name){
        this->id= id;
        this->name = name;
    }

};
class List{
    public:
    vector<Std> list;

    List(){

    }
    void addstudent(int id , string name){
        Std s1(id ,name);

        this->list.push_back(s1);
    }

    void updatestudent(int id, string name)
    {
       for(Std &e: list){
        if(e.id == id){
            e.name = name;
        }
       }
    }
    void show(){
        for(Std e: list){
            cout << e.id << ", " << e.name << endl;
        }
    }

};

int main(){
     
    List list;
    list.addstudent(777,"vaishali");
    list.addstudent(345,"bhoomi");
    list.addstudent(456,"krishna");
    list.addstudent(697,"pratik");
    list.addstudent(123,"utsav");

    list.updatestudent(123 , "darshan");
    list.updatestudent(456 , "bhavya");

    list.show();


    return 0;
}