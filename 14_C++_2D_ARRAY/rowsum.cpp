#include<iostream>
using namespace std;

int main(){

    int R,C;
    cout << "Enter rows:";
    cin >> R;
    cout << "Enter cols:";
    cin >> C;

    int arr[R][C];

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cout <<"arr[" << i << "][" << j <<"]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for(int i=0;i<R;i++)
    {
        int sum =0;
        for(int j=0;j<C;j++)
        {
           sum= sum+ arr[i][j];
        }
        cout << sum << endl;
    }


    return 0;
}