#include<stdio.h>
#include<stdlib.h>

struct node{
	int data; 
	struct node * next;
};
/*
void display(struct node*head){
	struct node* temp = head; 
	while( temp!=NULL){
		printf("%d  ",temp->data); 
		temp = temp->next; 
	}
	
}
int count(struct node * head){
	int num=0; 
		struct node* temp = head; 
	while( temp!=NULL){
		num++; 
		temp = temp->next; 
	}
	return num; 
	
}


int main()
{
	
struct node *head = (struct node*) malloc (sizeof(struct node*)); 
struct node *second = (struct node*) malloc (sizeof(struct node*)); 
struct node *third = (struct node*) malloc (sizeof(struct node*)); 
struct node *fourth = (struct node*) malloc (sizeof(struct node*)); 

head->data = 10; 
head->next = second; 
second -> data = 12; 
second->next = third; 
third->data = 123; 
third->next= fourth; 
fourth->data = 132; 
fourth->next = NULL; 

display(head); 
printf("%d",count(head)); 


}

*/

struct node * front = NULL; 
struct node* rear = NULL; 

void enque(int x){
	struct node* temp = (struct node*) malloc(struct node*); 
	temp -> data = x;
	temp->next = NULL: 
	if( front==rear){
		front =rear =temp; 
		 
		return;
	}
	
	rear->next = temp; 
	rear=temp; 
	
}

void deque(){
	struct node* temp = (struct node*) malloc(struct node*); 
	if(front =NULL){
		printf(" Queue is empty");
		return; 
	}
	else{
		temp = front; 
		front = front->next; 
	}
	free(temp); 
}
