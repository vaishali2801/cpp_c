#include<iostream>
using namespace std;

int main(){

   int num,last_digit;
   int sum =0;

   cout << "Enter number:";//757
   cin >> num;

   while(num>0){

    last_digit = num%10; //  ==7  //  == 5  // ==7
    sum += last_digit; // 0+ 7 =7  // 7+ 5 = 12
    num =num/10; // 757/10 =75   // 75/10 = 7 

   }
   cout << sum << endl;


    return 0;
}