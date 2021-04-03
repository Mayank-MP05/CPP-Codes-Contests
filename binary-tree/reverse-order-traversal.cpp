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

void printLevelOrder(node* root){
	queue<node*> q;
	list<node*> l;
	q.push(root);
	l.push_back(root);
	while(!q.empty()){
		node* t = q.front();
		//cout<<t->data<<" ";
		q.pop();
		
		if(t->left != NULL){
			q.push(t->left);
			l.push_back(t->left);
		}
		
		if(t->right != NULL){
			q.push(t->right);
			l.push_back(t->right);
		}
	}
	while(!l.empty()){
		cout<<(l.back())->data<<" ";
		l.pop_back();
	}
}

int main()  
{  
    node *root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
  
    cout << "Level Order traversal of binary tree is \n";  
    printLevelOrder(root);  
  
    return 0;  
}  
