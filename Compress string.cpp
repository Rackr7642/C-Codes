#include<iostream>
#include<cstring>
using namespace std; 

int main(){

char input[]= "aaabbcddeeeee"; 
char last = input[0];
  int i = 0;
  int j = 1;
  int count = 0;
  int size = 0;
    while(input[i]!='\0')
    {
        size++; 
        i++; 
    }
    
    i=0; 
    while(i<=size){
        
        if(input[i]==last)
        {
            count++; 
            i++;
        }
        else if(count>1)
        {
            input[j]= count%10+'0'; 
            j++;
            input[j]=input[i]; 
            last= input[i]; 
            j++; 
            i++;
            count=1; // because since last is updated to the new character it will count one less as last was updated to i. so for aaabb, when last = b, count will be only 1.
            
        }
             else
        {
            input[j]=input[i];
            last = input[j];
            i++; 
            j++;
            count=1; 

        }
    }
    
    i=0; 
    while( input[i]!='\0'){
    	cout<<input[i]; 
    	i++; 
	}
	}
    
