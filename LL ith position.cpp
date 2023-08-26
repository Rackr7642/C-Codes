// inserting and deleting at ith position in a linked list

#include<iostream>
using namespace std; 
class Node{
	public:
	int data; 
	Node *next; 
	 
	Node( int data){
		this->data = data; 
		next = NULL; 
	}
};

void print(Node * head){
	Node * temp = head; 
	while( temp!=NULL){
		cout<< temp->data<<" "; 
		temp = temp->next; 
	}
}


Node* insert_pos(Node* head, int pos, int data){
	Node * temp = head; 
	Node  newno(data); 
	newno.next = NULL; 
	
	//if first place
	if(pos==0){
		newno.next = head; 
		head = &newno; 
	}
	else{
	
	int count=0;
	while( count<pos-1 && temp->next!=NULL){
		temp=temp->next; 
		count++;
	} 
	Node *first=temp->next; 
	temp->next = &newno; 
	newno.next = first; 
	 	
}
	return head;
}

void del( Node * head, int pos){
	
}

int main(){
	
	 
	Node first(20); 
	Node second(30); 
	Node third(40); 
	Node fourth(50);
	Node fifth(60);
	Node sixth (70); 
	 
	first.next = &second; 
	second.next = &third; 
	third.next = &fourth;
	fourth.next = &fifth;
	fifth.next = &sixth; 
	sixth.next = NULL;    
	
	
	Node * head = &first; 
	int i=8; 

	head=insert_pos(head, i,15); 
	print(head);
	del(head, i); 
	
	
	
}
