#include<iostream>
using namespace std;

int main(){

   int start_year,end_year,leap[100],count=0;

   cout << "Enter start year:";
   cin >> start_year;

   cout << "Enter end year:";
   cin >> end_year;

   for(int i=start_year; i<=end_year ; i++)
   {

    if(i%4 == 0)
    {
        leap[count] = i;
        count++;
    }
   }
    cout << "leapyear is :{";
        for(int i=0; i<count; i++){
            cout << leap[i] << ", ";
        }
    cout << "}";

    return 0;
}