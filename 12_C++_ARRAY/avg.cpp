#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter size:";
    cin >> size;

    int arr[size];

    for(int i=0;i<size;i++)
    {
        cout << "arr[" << i << "]:" ;
        cin >> arr[i];
    }
    int sum =0;
    for (int i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    cout << "sum is :" << sum << endl;
    int  avg = (float)sum/size;

    cout << "avarage is :" << avg << endl;
 

    return 0;
}