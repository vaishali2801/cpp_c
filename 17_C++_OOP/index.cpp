#include<iostream>
#include<string.h>
using namespace std;

class student{

    public:
    char name[100];
    int age;
    int roll;
    char degree[100];

};

int main(){

    student student1;
    student student2;
    student student3;

    strcpy(student1.name, "vaishali");  
    student1.age = 18;
    student1.roll = 7;
    strcpy(student1.degree, "b.tech IT");

    strcpy(student2.name, "bhoomi");
    student2.age =18;
    student2.roll = 77;
    strcpy(student2.degree, "b.com");

    strcpy(student3.name,"trupaxi");
    student3.age =18;
    student3.roll = 123;
    strcpy(student3.degree,"IT");


    cout <<"name : " << student1.name << endl;
    cout <<"age : "<< student1.age << endl;
    cout <<"roll : "<< student1.roll << endl;
    cout <<"degree : "<< student1.degree << endl;

    cout <<"name : " << student2.name << endl;
    cout <<"age : "<< student2.age << endl;
    cout <<"roll : "<< student2.roll << endl;
    cout <<"degree : "<< student2.degree << endl;

    cout <<"name : " << student3.name << endl;
    cout <<"age : "<< student3.age << endl;
    cout <<"roll : "<< student3.roll << endl;
    cout <<"degree : "<< student3.degree << endl;

    return 0;
}