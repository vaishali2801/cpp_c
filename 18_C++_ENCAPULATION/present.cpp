#include<iostream>
#include<string>
using namespace std;

class present
{

public:
  string name;
  int roll;
  int date;
  string presents;
};

int main(){

    int std1;

    int size;
    cout << "enter size :";
    cin >> size;

    present std[size];

    for(int i=0;i<size;i++)
    {
        cout << i << "-name :";
        cin >> std[i].name;
        cout << i << "-roll :";
        cin >> std[i].roll;
        cout << i << "-date :";
        cin >> std[i].date;
        cout << i << "-present :";
        cin >> std[i].presents; 
    }

    cout <<" -------------------------------------" << endl;

    for(int i=0;i<size;i++)
    {
        cout <<"name :"<< std[i].name << endl;
        cout <<"roll no :"<< std[i].roll << endl;
        cout <<"date :"<< std[i].date << endl;
        cout <<"present :" << std[i].presents << endl;

    }


    return 0;
}