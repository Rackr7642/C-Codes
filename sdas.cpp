#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
    char input[1000];
    cout<<" Enter lettr \n";
    cin>> input; 
	//cin.getline(input, 1000);
    int count=0; 

    
for( int i=0; input[i]!= '\0'; i++)
{
    count++;    
} 

cout<< count <<endl; 
int len = count; 
for(int i=0; i!=len; i++)
{
	char temp = input[i]; 
	input[i] = input[count]; 
	input[count]=temp; 
	count--;
}

cout<<input;
  
}
