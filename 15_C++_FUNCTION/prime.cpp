#include<iostream>
using namespace std;

int isprime(){

    int num,count =0;

    cout << "enter num :";
    cin >> num;

    for(int i=2 ; i<num;i++)
    {
        if(i%2==0){
            count==1;
            break;
        }
    }

    if(count==0){
        cout << num <<" is prime number" << endl;
    }
    else{
        cout << num <<" is not prime number" << endl;
    }
}

int main(){
    

   isprime();

    return 0;
}