#include <iostream>
#include <cstring>
using namespace std;
int main()
{

	char input[] = "Welcome to Coding Ninjas";
	int size = 0;
	int i = 0;
	while (input [i] != '\0')
	{
		size++;
		i++;
	}
	//cout << size;
	i = 0;
	int j = size-1;

	while (i<j)
	{
		char temp = input[i]; 
		input[i]=input[j]; 
		input[j]= temp; 
		i++;
		j--; 
	}
	
	i=0;  
	int start = 0;  
	while( i<=size)
	{
		if(input[i]==' '|| input[i]=='\0')
		{
		int end = i-1; 
		//cout<< end <<" ";
		
		while (start<end)
		{
		char temp =input[end]; 
		input[end]=input[start]; 
		input[start]= temp; 
		end--;
		start++; 
		} 	
		start = i+1; 
		}
		
	 
	i++; 	
	}	
    return 0; 
}

