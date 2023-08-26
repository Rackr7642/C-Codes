#include<iostream>
using namespace std; 

void print( int arr[], int n)
{
	for(int i=0; i<n; i++){
	
	cout<< arr[i]<<endl;
}	
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int size = sizeof(arr)/sizeof(int);
	print(arr-1, size-1);
	
	return 0; 
	
}
