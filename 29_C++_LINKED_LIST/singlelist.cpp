#include<iostream>
#include<string>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(int value){
         data = value;
        this->next = NULL;
    }
};
class List{
    private:
        Node *head;
    public:

    List(){
        head = NULL;
    }

    void Add(int value){
        Node *n1 = new Node(value);
        n1->next = head;
        head = n1;
    }
    void show(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){

    List l1;
    l1.Add(10);
    l1.Add(20);
    l1.Add(30);
    l1.Add(40);

    l1.show();

    return 0;
}