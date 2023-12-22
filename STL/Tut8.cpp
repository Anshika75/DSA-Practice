// Question: Sort BT
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data){
    struct node* node = new struct node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorder(node* root, vector<int>& arr){
    if(root != NULL){
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
}

int main(){
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    vector<int> arr;
    inorder(root, arr);
    sort(arr.begin(), arr.end());
    cout << "\nSorted Array: ";
    for (int it : arr) {
        cout << it << " ";
    }

    return 0;
}
