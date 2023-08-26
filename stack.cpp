// Stack using array

#include<iostream>
using namespace std; 
/*
class stack{
	int *arr; 
	int size;
	int index=0; 
	public:	
	stack(int size)
	{
		this->size=size; 
		arr = new int[size]; 
	}

		
	bool isempty()
	{
	return index==0; 
	}
	
	bool isfull(){
		
		return index==size; 
	}	
	
	void push( int data){
		
		if(isfull()==0){
			arr[index]=data; 
			index++; 
		}
		else{
			cout<<"stack is full"<<endl;
		}
	}
	void pop()
	{
		if(isempty()!=1){
			index--; 
		}
		else{
			cout<<"Stack is empty"<<endl;
		}
	}
	void print(){
		int i=0;
		while(i<index){
			cout<< arr[i]<<" ";
			i++; 
		}
		
	}
};


int main(){

	int size; 
	int data; 
	
	cout<< " Enter the size of your stack"<<endl;
	cin>> size; 
		stack s1(size); 
	int i=0;
	while( i<size){
		cout<< " Enter the value of stack at "<< i <<" postion"<<endl;
		cin>>data;
		s1.push(data);
		i++; 
	} 
	s1.print(); 
	return 0; 
}

*/ 
//stack using linked list: 

class ll{
	int data; 
	ll *next; 
	
	ll( int data){
		this->data = data; 
		this->next = NULL; 
	}
};

bool isEmpty(head){
	if(head==NULL){
		return true; 
	}
	else{
		return false; 
	}
	
}

bool isfull(int size){
	

}

	

void push; 
void pop; 



int main{



}








