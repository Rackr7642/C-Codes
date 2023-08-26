/* Implement the following: 
Create Class and Object 
Create Dynamic object
Create Constructor
Create Default and Paramenterised constructor
Utlize this keyword
Create Copy Constructor
Create Destructor

*/

#include<iostream>
using namespace std; 
class Student{
	public: 
	int St_id; 
	char name[100]; 
	char course[100]; 
	int ph_no; 


Student() //Calling default constructor
{
	cout<< " Default Constructor called:"<<endl; 
}

Student(int ph_no){
	cout<<" Parameterised constrcutor called:"<< endl; 
	this->ph_no=ph_no; 	
}


~Student(){
	
cout<< " Destructor called"<<endl;

delete (*S2);
}};



	Student S1; //Static object
	Student *S2 = new Student; //Dynamic object; 
	Student S3(10); //will call parameterise constructor
	Student S4 (*S2); 


void display(){
	cout<< " Student 1 info: "<< endl;
	cout<< " Name: " << S1.name<< endl;
	cout<< " Student ID: "<< S1.St_id<< endl ;
	cout<< " Course: "<< S1.course<<endl; 
	cout<< " Phone No: "<< S1.ph_no<<endl;  
}

int main(){
/*	
	cout<< S3.ph_no; 
	cout<< " Enter the name of student one"<<endl;
	cin>>S1.name;
	cout<< " Enter Student one ID in numeric "<<endl; 	
	cin>> S1. St_id; 
	cout<< " Enter Student Ph_no"<<endl;
	cin>> S1.ph_no; 
	cout<< "Enter the name of student two" << endl; 
	cin>> S2->name; 
	cout<< " Enter Student one ID "<<endl; 	
	cin>> (*S2).St_id; 
	cout<< " Enter Student Ph_no"<<endl;
	cin>> S2->ph_no; 
	
	//display(); 
*/	 	

}
