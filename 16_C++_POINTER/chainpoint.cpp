#include<iostream>
using namespace std;

int main(){

    int A = 13;

    int *ptr1 = &A;
    int **ptr2 =&ptr1;
    int ***ptr3 =&ptr2;

    cout << ptr1 << "==" << *ptr1 << endl;
    cout << *ptr2 << "==" << **ptr2 << endl;
    cout << **ptr3 << "==" << ***ptr3 << endl;



    return 0;
}