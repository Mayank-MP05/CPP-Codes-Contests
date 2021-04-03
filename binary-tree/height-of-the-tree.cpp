#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
	node(int val){
		this->data = val;
		this->left = this->right = NULL;
	}
};

node* newNode(int val){
	node* t = new node(val);
	return t;
}

int heightOfTree(node* t){
	if(t == NULL){
		return 0;
	}else{
		int lh = heightOfTree(t->left);
		int rh = heightOfTree(t->right);
		
		return lh >= rh ? lh+1 : rh+1;
	}
}

int main()  
{  
    node *root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->left->left = newNode(56);  
    root->left->left->left->left = newNode(45);  
    root->left->right = newNode(5);  
  
    cout << "Height of the binary tree is "<<heightOfTree(root);    
  
    return 0;  
}  
