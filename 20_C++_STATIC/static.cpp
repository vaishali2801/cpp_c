#include<iostream>
#include<string>
using namespace std;

class student{
   public:
   int roll;
   string name;
   static string course;
};
string student::course = "gim";
 int v = 7;

int main(){

    int v = 10;

    cout <<"v : "<< v << endl;
    cout <<"v : "<< ::v << endl;
 
    student batch[5];

    student std1, std2;

    std1.roll = 111;
    std1.name = "vaishali";

    std2.roll = 777;
    std2.name = "bhoomi";

    batch[0] = std1;
    batch[1] = std2;
    batch[2].name = "krishna";

    cout << std1.course << endl;
    cout << std1.name << endl;
    cout << std1.roll << endl;
    cout << std2.name << endl;
    cout << std2.roll << endl;
    

    return 0;
}