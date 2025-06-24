#include<iostream>
#include<string.h>
using namespace std;

class dog{

    public:
    char name[100];
    int age;
    int price;
    char gender[100];
};

int main(){

    dog dog1;
    dog dog2;
    dog dog3;

    strcpy(dog1.name, "jack");
    dog1.age = 10;
    dog1.price = 3000;
    strcpy(dog1.gender, "male");

    strcpy(dog2.name, "pixie");
    dog2.age = 15;
    dog2.price = 5000;
    strcpy(dog2.gender, "female");

    strcpy(dog3.name, "betsy");
    dog3.age = 13;
    dog3.price = 8000;
    strcpy(dog3.gender, "female");

    cout << "name :" << dog1.name << endl;
    cout << "age :" << dog1.age << endl;
    cout << "price :" << dog1.price << endl;
    cout << "gender :" << dog1.gender << endl;

    cout << "name :" << dog2.name << endl;
    cout << "age :" << dog2.age << endl;
    cout << "price :" << dog2.price << endl;
    cout << "gender :" << dog2.gender << endl;

    cout << "name :" << dog3.name << endl;
    cout << "age :" << dog3.age << endl;
    cout << "price :" << dog3.price << endl;
    cout << "gender :" << dog3.gender << endl;

    return 0;
}