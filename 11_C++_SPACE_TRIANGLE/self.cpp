#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=5;i++){

        for(int j=i;j<=5;j++)
        {
            cout << j ;
        }
       cout<< " " << endl; 
    }
 cout << "========================" << endl;
    
    for(int i=5;i>=1;i--)
    {
        for(int k=1;k<i;k++)
        {
            cout << " ";
        }
        
        for(int j=i;j<=5;j++)
        {
            cout << j ;
        }
        cout << endl;
    }

  
    return 0;
}