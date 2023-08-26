#include<iostream> 
#include<string.h>
using namespace std; 

int substring( string input, string output[])
{

// Base case: In case of entry string we have empty substring	
	if(input.size()==0){
		output[0]=""; 
		return 1; 
	}
	
	string small = input.substr(1); 
	int smallsubstr = substring(small, output); 
	for(int i=0; i<smallsubstr; i++)
	{
		output[i+smallsubstr] = input[0]+ output[i]; 
	}
	
	return 2*smallsubstr; 
}




int main(){

string str1; 
//Enter your String to get substring
cout<<"Enter your string"<<endl;
getline(cin,str1);  

//Get string size to create dynamic string array to store substrings. Size = 2^n
int len = str1.size(); 
string *output = new string[1000]; 

//Call substring function that returns number of substring
int nsubs = substring(str1, output); 

//Printing all substrings
for(int i=0; i<nsubs; i++)
{
	cout<< output[i]<<endl; 
	
}


return 0; 
}
