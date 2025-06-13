#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter size:";
    cin >> size;
    
    int arr1[size],arr2[size],arr3[size];

    for(int i=0;i<size;i++)
    {
        cout << "arr1[" << i << "]:" ;
        cin >> arr1[i];
    }
    for(int i=0;i<size;i++)
    {
        cout << "arr2[" << i << "]:" ;
        cin >> arr2[i];
    }
    cout << "arr1[" << size << "]:{";

    for(int i=0;i<size;i++)
    {
        cout << arr1[i] << " ,";
    }
    cout << "}" << endl;
    cout << "arr2[" << size << "]:{";

    for(int i=0;i<size;i++)
    {
        cout << arr2[i] << " ,";
    }
    cout << "}" << endl;

   cout << "arr3[" << size << "]:{";
    for(int i=0;i<size;i++)
    {
        arr3[i] = arr1[i] +arr2[i];
        cout << arr3[i] << " ,";
    }
    cout << "}" << endl;
   
    return 0;
}