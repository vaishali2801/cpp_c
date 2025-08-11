#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }

};
class linkedlist{
    private:
    Node* head;

    public:
    linkedlist(){
        head = nullptr;
    }

    void insertatstart(int value){
        Node *ptr = new Node(value);
        ptr->next = head;
        head = ptr;
    }
    void display(){
        Node* temp = head;

        while(temp != nullptr){
            cout << temp->data << "->";
            temp= temp->next;
        }
        cout << "NULL"<< endl;
    }

};

int main(){

    linkedlist l1;
    l1.insertatstart(200);
    l1.insertatstart(300);
    l1.insertatstart(400);
    l1.insertatstart(500);

    l1.display();

    return 0;
}
//      1000                  2000
// _______________       ______________
//|      |        |     |      |       |
//|   3  |  2000  |---->|  7   |  NULL |
//|______|________|     |______|_______|
//       ^
//       |
//       |
//       |
// ______|_______
//|              |
//|    1000      |
//|______________|
//     HEAD
//
//   add in start
//     3000 ptr
// _______________      
//|      |        |     
//|   5  |  NULL  |
//|______|________|     
//
//
//
//
//