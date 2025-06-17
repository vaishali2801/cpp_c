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
          sum +=arr[i][j];
        }
        cout << endl;
    }
    float avg = (float)sum/size;
    cout  << "sum is : " << sum << endl;
    cout  << "average is : " << avg << endl;

    return 0;
}