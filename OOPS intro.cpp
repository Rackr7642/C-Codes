#include<iostream>
using namespace std; 

class Employee{
	public: // allows the properties of class to be used outside the class. 
	int Emp_ID; 
	char Name[100]; 
	char Desig[100]; 
	
	private:// varaible below private can only be accessed withing the class itself, like a function can use it, but not outside the class or in main. 
	int salary; 
	// By using a public function like display() below, one can access private variables even outside the class.
	
	public:
	// The function below can access the private properties of the class. 	
	void display(){
		cout<< Emp_ID<<":" << " "<< Name << " "<< Desig << endl; 
	}
	void accpvt()// Since accpvt is a public function that is within class, it can access private variable salary and print it in the main program if called as shown below.
	{
		cout<< salary; 
	}
	
};

int main(){
	//Static varibles:
	Employee E1, E2, E3, E4;
	
	cout<< "Enter name"<<endl; 
	cin>>E1.Name; 
	cout<< "Enter Desig and Emp_ID"<<endl;
	cin>> E1.Desig >> E1.Emp_ID;
	
	E1.display(); // Calling display funtion of class Employee for its object E1. 
 	
 	E1.accpvt(); // priting value of a private varaible using public function
 	//setter is the one function use to set value of a private variable. 
 	//getter is one that is used to get value of a private variable. 
	
	
	// Dynamic variables;
	Employee *E5 = new Employee; 
	
	(*E5).Emp_ID = 1305; 
	 E5->Emp_ID= 1306;
	
	cout<< "Enter name"<<endl; 
	cin>>(*E5).Name; 
	cout<< "Enter Desig and Emp_ID"<<endl;
	cin>> (*E5).Desig >> E5->Emp_ID;
	//above statement can be rewritten as: 
	E5->display(); // Calling function for dynamically made object 
	

}	

