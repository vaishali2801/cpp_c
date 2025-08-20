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
    void deleteatEnd(){
        if(head == nullptr){
            cout << "empty list" << endl;
            return;
        }
        if(head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteatspecificpos(int pos)
    {
        if(head ==nullptr){
            cout << "empty list" << endl;
            return;
        }
        if(pos==0){
            deleteAtstart();
            return;
        }
        Node* temp = head;
        for(int i = 0;i< pos-1 && temp!= nullptr;i++){
            temp = temp->next;
        }
        Node* n1 = temp->next;
        temp->next = n1->next;
        delete n1;

    }
    void updateatstart(int newvalue){
        if(head ==nullptr){
            cout << "empty list " << endl;
            return;
        }

        Node* temp = head;
        head->data = newvalue;
        return;

    }
    void updateatend(int newvalue){
         if(head ==nullptr){
            cout << "empty list " << endl;
            return;
        }
        Node* temp = head;

        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->data = newvalue;
        return;

    }
    void updateatspecificPos(int newvalue,int pos){
            if(head ==nullptr){
                cout << "empty list " << endl;
                return;
            }
        Node* temp = head;

        for(int i=0;i<pos&& temp!=nullptr;i++){
           temp = temp->next;
        }
        if(temp == nullptr){
            cout << "out of range" << endl;
            return;
        }
        temp->data = newvalue;
        return;
    }

};
int main(){

    Linkedlist l1;
    l1.insertAtbegining(50);
    l1.insertAtbegining(100);
    l1.insertAtbegining(150);
    l1.insertAtbegining(200);
    // l1.addAtspecificposition(500,4); 
    // l1.addAtspecificposition(400,6);
    // l1.insertAtbegining(10);
    // l1.deleteAtstart();
    // l1.deleteatEnd();
    // l1.deleteatspecificpos(2); 
    // l1.updateatstart(120);
    // l1.updateatend(10);
    l1.updateatspecificPos(140,2);

    l1.display();
    return 0;
}