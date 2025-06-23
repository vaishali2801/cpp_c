#include<iostream>
using namespace std;

int main(){

    int arr[5] ={ 1, 2, 3, 4, 5};

    int *ptr =arr;
    int *in1 = &arr[0];


    cout << *in1 << endl;
    int ptr2[5];

    for(int i=0; i<4; i++)
    {
       ptr2[i] += arr[i];
    }
    for(int i=0; i<4; i++)
    {
        cout << ptr[i] <<" : " << ptr2[i] << endl;
    }

    return 0; 
}