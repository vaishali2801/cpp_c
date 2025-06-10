#include<iostream>
using namespace std;

int main(){

   int r,c;

   cout << "Enter rows:";
   cin >> r;
   cout << "Enter colums:";
   cin >> c;

   for(int i=1;i<=r;i++){
 
        for(int k=i;k<r;k++){  // i=1 k=1 op==_ k=2 op==_ k=3 op==_ k=4 op==_ 
            cout << " " << " "; // i=2 k=2 op==_ k=3 op==_ k=4 op==_ 
                                // i=3 k=3 op==_ k=4 op==_
                                // i=4 k=4 op==_
        }
        for(int j=1;j<=i;j++){ // i=1 j=1 op=* 
            cout << "*" << " "; // i=2 j=1 op=* i=2 j=2 op=*
                                //i=3 j=1 op=* i=3 j=2 op=* i=3 j=3 op=* 
                                // i=4 j=1 op=* i=4 j=2 op=* i=4 j=3 op=* i=4 j=4 op=*
                                // i=5 j=1 op=* i=5 j=2 op=* i=5 j=3 op=* i=5 j=5 op=* i=5 j=5 op=*
        }
        cout << endl;
   }

    return 0;
}