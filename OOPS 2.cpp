// Practice Shallow and Deep Copy 
// Practice Deep Copy with Copy constructor and reference variable
// Practice const varaible
// Practice Initializer list
// Practice Constant Function
// Practice Static Function
// Utilize Scope Resolution Operator
#include<iostream>
#include<string.h>
using namespace std; 

class Copy{
	
	char name[];
	public:
		
	Copy(char alias[]){
		int i =0;
		//Shallow Copy: The function is passing address of mssg which is same for both for O1 and O2 object. Hence when changes are made to original mssg char array, 
		//info of O1.name, O2.name also changes. 
		/*
		while (i!='\0'){
			name[i]==alias[i];
			i++;
		}
		*/
		//To avoid Shallow copy we can either pass the message "Hello" directly storing it in name with each mssg having unique address or make a new char utilizing Deep copy.
		char *name =new char[strlen(alias)+1];
		strcpy(name,alias); 
		}
	

	
	void print(){
		cout<< name<<endl; 
	} 
	
	
};

int main()
{
	char mssg[] = "Hello"; 
	Copy O1(mssg); 
	O1.print();
	mssg[2]='o';
	
	Copy O2(mssg); 
	O2.print();
	O2.print();
}

