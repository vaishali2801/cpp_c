#include<iostream>
#include<string>
using namespace std;

class data{

    public:
    string name;
    string email;
    int phone;
    string password;
};

int main(){
    data obj1;
    int size;
    cout << "Enter size :";
    cin >> size;

    data obj[size];

    for(int i=0; i<size; i++)
    {
        cout << i <<"-Name :";
        cin >> obj[i].name; 
       
        cout << i <<"-email :";
        cin >> obj[i].email; 
       
        cout << i <<"-phone :";
        cin >> obj[i].phone; 
       
        cout << i <<"-password :";
        cin >> obj[i].password; 
       cout << endl;
    }
    cout <<" ----------------------------------" << endl;
   for(int i=0; i<size;i++)
   {
        cout << "name :" << obj[i].name << endl;
        cout << "email :" << obj[i].email << endl; 
        cout << "phone :" << obj[i].phone<< endl; 
        cout << "password :" << obj[i].password << endl;
    
   }
    return 0;
}
