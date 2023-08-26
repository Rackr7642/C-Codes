
//With C++
/*
#include<iostream>
using namespace std; 

class link{
	public: 
	int value; 
	link *next; 

	link(int value)
	{
		this->value = value;
		next = NULL;
	}

};


void print(link *head){
	
	while(head!= NULL){
		cout<< head->value <<" ";
		head= head->next;  
		
		
	}
	
}


int main(){
	int data; 
	
	link n1(12); 
	link n2(13);
	link n3(14); 
	
	link *head = &n1; 
	n1.next=&n2; 
	n2.next=&n3; 
	
	print(head); 
	return 0; 
	
}


*/
//With C singly linked list

/*
#include<stdio.h>
#include<stdlib.h>
 
struct node{
	int data; 
	struct node * next; 
};

void print( struct node *head){
	struct node* temp=head;
	while ( temp!= NULL){
		
		printf("%d    ",temp->data); 
		temp = temp->next; 
	}
}

int count(struct node *head){
	int number=0;
	struct node* temp=head;
	while(temp!=NULL)
	{
		number++;
		temp=temp->next; 
	}
	return number; 
}
int main()
{
	struct node *head; 
	struct node *first; 
	struct node *second;
	head = (struct node *) malloc(sizeof(struct node)); 
	first = (struct node *) malloc(sizeof(struct node)); 
	second = (struct node *) malloc(sizeof(struct node)); 
	
	
	//Assiging value
	head-> data = 12; 
	first-> data =13; 
	second-> data = 14;	
	
	//linking
	
	head->next= first; 
	first->next = second; 
	second->next = NULL; 
	
	print(head); 
	int x = count(head); 
	printf("%d   :",x); 
	return 0; 
}
*/
//Doubly linked list

#include<stdio.h>
#include<stdlib.h>

/*
struct dub_node{
	int data;
	struct dub_node *next; 
	struct dub_node *prev;
};
//Printing in reverse
void print(struct dub_node*fourth){
	dub_node*temp = fourth; 
	while(temp!=NULL){
	printf("%d  ",temp->data); 
	temp = temp->prev;
}}

//Printing in forward
void printfwd(struct dub_node*head){
	struct dub_node*temp = head; 
	while(temp!=NULL){
		printf("%d  ", temp->data);
		temp= temp->next; 
	}
}
int main(){
	struct dub_node * head; 
	struct dub_node * first;
	struct dub_node * second;
	struct dub_node * third;
	struct dub_node * fourth; 
	head = (struct dub_node *) malloc(sizeof(struct dub_node*))	;
	first = (struct dub_node *) malloc(sizeof(struct dub_node*));
	second = (struct dub_node *) malloc(sizeof(struct dub_node*));
	third = (struct dub_node *) malloc(sizeof(struct dub_node*));
	fourth = (struct dub_node *) malloc(sizeof(struct dub_node*));
	
	head-> data = 1; 
	head->next = first; 
	head->prev = NULL;
	first-> data = 2; 
	first->next = second;
	first->prev = head; 
	second->data = 3;
	second->next = third;
	second->prev =first; 
	third->data=4; 
	third->next=fourth; 
	third->prev = second; 
	fourth->data=5; 
	fourth->next = NULL; 
	fourth->prev = third; 	
	
	
	printfwd(head);
	print(fourth);
}
*/


//circular linked list
/*
struct cir_node{
	int data;
	struct cir_node*next; 
};

void print(struct cir_node*head){
	struct cir_node*temp =head;
	do{
		printf("%d ",temp->data);
		temp = temp->next; 
	}
	while(temp!=head);
	

}
int main(){
	struct cir_node*head;
	struct cir_node*second;
	struct cir_node*third;
	struct cir_node*fourth;
	
	head = (struct cir_node*)malloc(sizeof(struct cir_node*));
	second = (struct cir_node*)malloc(sizeof(struct cir_node*));
	third = (struct cir_node*)malloc(sizeof(struct cir_node*));
	fourth = (struct cir_node*)malloc(sizeof(struct cir_node*));
	
	head->data = 10; 
	head->next = second; 
	second->data = 20; 
	second->next = third; 
	third->data = 30; 
	third->next = head; 

	print(head);
}
*/

