#include<iostream>
using namespace std;

int main(){

   for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if ((i == 0 && j != 0 && j != 7 - 1) ||         // Top line
                (i == 7 / 2 && j != 0 && j != 7 - 1) ||   // Middle line
                (i == 7 - 1 && j != 0 && j != 7 - 1) ||   // Bottom line
                (i < 7 / 2 && j == 0) ||                    // Left upper side
                (i > 7 / 2 && j == 7 - 1))                // Right lower side
            {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}