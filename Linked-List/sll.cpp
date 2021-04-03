#include <bits/stdc++.h>
using namespace std;

class node{
	public:
	int val;
	node* next;
	node(int val){
		this->val = val;
		this->next = NULL;
	}
};

class sll{
	node* head;
	public:
	sll(){
		head = NULL;
	}	
	
	void insertNode(int val){
		node* newNode = new node(val);
		node* temp = head;
		if(head == NULL){
			head = newNode;
		}else{
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}
	
	void print(){
		node* temp = head;
		
		while(temp != NULL){
			cout<<temp->val<<" -> ";
			temp = temp->next;
			
		}
		cout<<endl;
	}
	
	void insertAtIndex(int index,int val){
		node* newNode = new node(val);
		if(index == 0){
			//Head Node Insertion
			newNode->next = head;
			head = newNode;
		}else{
			node* t = head;
			int c = 0;
			while(t->next != NULL){
				if(c == index-1){
					newNode->next = t->next;
					t->next = newNode;
				}
				c++;
				t = t->next;
			}
		}
	}
};

int main(){
	sll s1;
	s1.insertNode(10);
	s1.insertNode(20);
	s1.insertNode(30);
	s1.insertNode(40);
	s1.print();
	s1.insertAtIndex(0,5);
	s1.print();
	s1.insertAtIndex(2,16);
	s1.print();
	s1.insertAtIndex(5,95);
	s1.print();
	s1.insertNode(600);
	s1.print();
	return 0;
}
