#include<iostream>
#include<string.h>
using namespace std;

class hotel{
    public:
    char name[100];
    int price;
    int discount;

};


int main(){

    hotel hotel1;
    hotel hotel2;
    hotel hotel3;

    strcpy(hotel1.name, "Renaissance");
    hotel1.price = 100000;
    hotel1.discount = 40;

    strcpy(hotel2.name, "Four points");
    hotel2.price = 20000;
    hotel2.discount = 30;

    strcpy(hotel3.name, "The cama");
    hotel3.price = 300000;
    hotel3.discount = 50;

    cout << " hotel name :"<< hotel1.name << endl;
    cout << " hotel price :"<< hotel1.price << endl;
    cout << " hotel discount :"<< hotel1.discount << endl;

    cout << " hotel name :"<< hotel2.name << endl;
    cout << " hotel price :"<< hotel2.price << endl;
    cout << " hotel discount :"<< hotel2.discount << endl;

    cout << " hotel name :"<< hotel3.name << endl;
    cout << " hotel price :"<< hotel3.price << endl;
    cout << " hotel discount :"<< hotel3.discount << endl;



    return 0;
}