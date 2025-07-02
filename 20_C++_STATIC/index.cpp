#include<iostream>
#include<string>
using namespace std;

class array{
    public:
    static int globalvar;
};
int array::globalvar = 7000;
// access static members
int main(){
 
    cout << "static var :" << array::globalvar << endl;

    return 0;
}