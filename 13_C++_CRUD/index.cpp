#include<iostream>
using namespace std;

int main(){

    int size,choice,pos,ele;
    int arr[100];

    cout << "Enter size :";
    cin >> size;

    for (int i=0;i<size;i++){

        cout<< "arr["<< i << "]:";
        cin >> arr[i];
    }

    while(choice != 0)
    {
        cout << "====================================" << endl;
        cout << "-> Press 1 for create" << endl;
        cout << "-> Press 2 for read" << endl;
        cout << "-> Press 3 for update" << endl;
        cout << "-> Press 4 for delete" << endl;
        cout << "-> Press 0 for Exit....!" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: cout << "Enter position :"; // 3
                    cin >> pos;

                    cout << "Enter element:"; // 54
                    cin >> ele;

                    for(int i=size;i<pos;i--) // i=4  arr[4]= arr[3] // arr[3] = arr[2] 
                    {
                        arr[i] = arr[i-1];   
                    }
                    arr[pos]=ele; // arr[3]=54
                    size++; //before  size is 4 after size is 5 
            
                cout << "Element inserted successfully" << endl;
                break;
            case 2 : 
                    cout << "arr["<<size<<"]: {";

                    for(int i=0;i<size;i++)
                    {
                        cout << arr[i] << " ,";
                    }
                    cout << "}" << endl;
                    break;
        
            case 3 :
                    cout << "Enter position :"; // 3
                    cin >> pos;

                    cout << "Enter element:"; // 54
                    cin >> ele;
                    arr[pos] = ele; // arr[3] =54
                  
                    cout << "Element is Updated "<< endl;
                    break;
        
            case 4 :  
                    cout << "Enter position :"; // 2
                    cin >> pos;

                    for(int i=pos;i<size;i++) // i=2 2< 4 arr[2]=arr[3] // 0 1 2 3 
                    {
                        arr[i]=arr[i+1];
                    }
                    size--;// size =4  after size = 3 

                    cout << "element deleted successfully"<< endl;
                    break;
        
        default: cout << "Enter valid number"<< endl;
            break;
        }
    }
    return 0;
}