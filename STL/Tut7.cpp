// Question: Sort bst
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *insert(Node *root, int data){
    if (root == NULL){
        root = new Node;
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }else if(data < root->data){
        root->left = insert(root->left, data);
    } else{
        root->right = insert(root->right, data);
    }
    return root;
}
void inorder(Node *root){
    if(root != NULL){
        inorder(root->left);
        cout<< root->data <<" ";
        inorder(root->right);
        
    }
}

int main(){
    Node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 8);
    root = insert(root, 6);
    cout << "Sorting of the binary tree is: ";
    inorder(root);
    cout << endl;
    return 0;
}