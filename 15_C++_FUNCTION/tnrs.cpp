#include<iostream>
using namespace std;

// TNRS-  TAKE NOTHING RETURN SOMTHING

int sumArray()
{
    int arr[5] ;
     for(int i=0;i<5;i++)
     {
        cout << "arr["<< i << "]:";
        cin >> arr[i];
       
     }

    int sum = 0;
    for(int i=0; i<5; i++)
    {
        sum += arr[i]; 
    }
    return sum;
}

int main(){

    cout << sumArray() << endl;

    return 0;
}