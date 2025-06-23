#include<iostream>

using namespace std;

int main(){

    int x =10;
    int *ptr1 = &x;

    int y =20;
    int *ptr2 = &y;


    cout << ptr1 << endl;
    cout  << *ptr1 << endl;
    cout  << ptr2 << endl;
    cout  << *ptr2 << endl;


    printf("%x \n",ptr1);
    printf("%x \n",ptr2);

    printf("%u \n",ptr1);
    printf("%u \n",ptr2);

    printf("%p \n",ptr1);
    printf("%p \n",ptr2);
    return 0;
}