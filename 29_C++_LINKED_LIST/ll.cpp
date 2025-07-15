#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        this->data= 0;
        this->next = NULL;
    }
};
int main(){
    Node *obj1 = new Node();
    obj1->data= 700;

    Node *obj2 = new Node();
    obj2->data = 800;
    obj1->next = obj2;

    Node *obj3 = new Node();
    obj3->data = 900;
    obj2->next = obj3;

    Node *obj4 = new Node();
    obj4->data = 500;
    obj3->next = obj4;

    Node *obj5 = new Node();
    obj5->data = 300;
    obj4->next = obj5;

    Node *obj6 = new Node();
    obj6->data = 100;
    obj5->next = obj6;

    // cout << obj1 << " obj1-> data : " <<obj1->data << " - obj1->next :" << obj1->next << endl;
    // cout << obj2 << " obj2-> data : " <<obj2->data << " - obj2->next :" << obj2->next << endl;
    // cout << obj3 << " obj3-> data : " <<obj3->data << " - obj3->next :" << obj3->next << endl;

    //  cout  << obj1->data << endl;
    //  cout  << obj1->next->data << endl;
    //  cout  << obj1->next->next->data << endl;
    // cout << obj1->next << endl;
    Node *ptr = obj1;

    while(ptr != NULL){
        cout << "data : " << ptr->data << endl;
        ptr = ptr->next;
    }
    return 0;
}