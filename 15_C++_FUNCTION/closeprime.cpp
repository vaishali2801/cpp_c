#include<iostream>
using namespace std;

bool isPrime(int n){
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return  true;
}
int closePrime(int n){
    
    for(int i=n-1; i>1; i--) //n=10 i=9 
    {
        if(isPrime(i))
        {
            return i;
        }
    }
}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << closePrime(n);
    return 0;
 }