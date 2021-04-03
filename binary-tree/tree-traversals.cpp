#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        this->data = val;
        this->left = this->right = NULL;
    };
};

void inorder(node* t){
    if(t == NULL)
        return;
    inorder(t->left);
    cout<<t->data<<"    ";
    inorder(t->right);
}
void preorder(node* t){
    if(t == NULL)
        return;
    cout<<t->data<<"    ";
    preorder(t->left);
    preorder(t->right);
}
void postorder(node* t){
    if(t == NULL)
        return;
    postorder(t->left);
    postorder(t->right);
    cout<<t->data<<"    ";
}
int main(){
    node* root = new node(10);
    root->left = new node(5);
    root->left->left = new node(2);
    root->left->right = new node(7);
    root->right = new node(15);
    cout<<"Inorder : ";
    inorder(root);
        cout<<"\npreorder : ";
    preorder(root);
        cout<<"\npostorder : ";
    postorder(root);
    return 0;
}