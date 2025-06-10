#include<iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter number:";
    cin >> num;

     for(int i=1; i<=num; i++){ // num=6

        for(int k=i; k<num; k++){//i=1 k=1 op==_ k=2 op=_ k=3 op=_ k=4 op=_ k=5 op=_ 
            cout << " ";        //i=2 k=2 op==_ k=3 op=_ k=4 op=_ k=4 op=_ k=5 op=_
        }                       // i=3 k=3 op=_ k=4 op=_ k=4 op=_ k=5 op=_
                                 //i=4 k=4 op=_ k=4 op=_ k=5 op=_

        for(int j=1; j<=i; j++) {// i=1 j=1 op=*
            cout << "*" << " "; // i=2 j=1 op=* i=2 j=2 op=*
        }                       //i=3 j=1 i=3 j=2 op=* i=3 j=3 op=*
                                //i=4 j=1 i=4 j=2 op=* i=4 j=3 op=*

        cout << endl;
    }

    cout << "----------------------------------" << endl;

    for(int i=1; i<=num; i++) 
    {
        for(int k=1; k<=i; k++)
        {
            cout << k << " ";
        }

        for(int l=i; l<num; l++)
        {
            cout << "  " << "  ";
        }

        for(int j=1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}