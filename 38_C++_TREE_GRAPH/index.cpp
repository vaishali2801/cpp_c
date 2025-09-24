#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int value){
        data = value;
        right = left = nullptr;
    }
};

class tree{
    public:
    Node*root;

    tree(){
        root = nullptr;
    }
    void createtree(){
        root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
    }
    void preorder(Node*node){ // root ,left ,right
        if(node == nullptr)return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);

    }
    void inorder(Node*node){ // left,root ,right
        if(node == nullptr)return;
           inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);

    }
    void postorder(Node*node){ //left ,right, root 
        if(node == nullptr)return;
        postorder(node->left);
        postorder(node->right);
          cout << node->data << " ";
    }
};

int main(){
    tree t;
    t.createtree();

    cout << "pre order:";
    t.preorder(t.root);
    cout << endl;

    cout << "in order:";
    t.inorder(t.root);
    cout << endl;

    cout << "post order:";
    t.postorder(t.root);
    cout << endl;

    return 0;
}