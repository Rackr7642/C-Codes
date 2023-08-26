#include<iostream>
using namespace std; 
#include<bits/stdc++.h>


int selectionsort (int arr[] , int size)
{   int j = size-1; 
	while(j>=0){
	int index = 0, temp; 
	int min =  arr[0]; 

	
	
	for (int i=0; i<size; i++){
		if(min>arr[i]){
			min =arr[i]; 
			index =i;
		}
	}
	temp = arr[0]; 
	arr[0]=min; 
  	arr[index]= temp;
	j--; 
	}  
	for(int i =0; i<size; i++)
	{
		cout<<arr[i] << " "; 
	}
	  
 
}




int main(){
	int arr[]= {5, 1, 2, 4, 7,6 }; 
	int size = sizeof(arr)/sizeof(int); 
	
    selectionsort(arr, size); 
	
	return 0; 
}
