#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter size:";
    cin >> size;

    int arr[size][size];

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout <<"arr[" << i << "][" << j <<"]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    int sum =0;
  
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
         if(i+j==size-1)
         {
            cout << arr[i][j] <<" " ;
         }
         else{
            cout << "  " << " ";
         }
        }
        cout << endl;
    }
    return 0;
}