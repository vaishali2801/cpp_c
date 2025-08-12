#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next= nullptr;
    }
};
class Linkedlist{
    private:
    Node* head;
    public:
    Linkedlist(){
        head = nullptr;
    }

    void insertAtbegining(int value){

        Node* ptr = new Node(value);
        ptr->next = head;
        head =ptr;
    }

    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void addAtspecificposition(int value,int pos){
        if(pos == 0){
            insertAtbegining(value);
            return;
        }

        Node* ptr = new Node(value);
        Node* temp = head;

        for(int i = 0; i<pos-1 && temp != nullptr;i++){
            temp = temp->next;
        }

        if(temp==nullptr){
            cout << "out of range" << endl;
            return;
        }
        
        ptr->next = temp->next;
        temp->next = ptr;
    }

    void deleteAtstart(){
        if(head == nullptr){
            cout << "Node is empty" << endl;
            return;
        }
        Node *temp = head;
        head = temp->next;
        delete temp;

    }

};
int main(){

    Linkedlist l1;
    l1.insertAtbegining(50);
    l1.insertAtbegining(100);
    l1.insertAtbegining(150);
    l1.insertAtbegining(200);
    l1.addAtspecificposition(500,4);
   // l1.addAtspecificposition(400,6);
    l1.insertAtbegining(300);

   // l1.deleteAtstart();

    l1.display();
    return 0;
}