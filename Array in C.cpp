#include<iostream>
#include<stdio.h>
int sum(int price[], int size); 
int main(){
	/*
	int array[5]; 
	printf("Enter the value of array:"); 
	scanf("%d", &array[0]); 
	printf("Enter the value of array :"); 
	scanf("%d", &array[1]); 
	printf("Enter the value of array :"); 
	scanf("%d", &array[2]);
	printf("Enter the value of array :"); 
	scanf("%d", &array[3]);
	printf("Enter the value of array :"); 
	scanf("%d", &array[4]); 
	
	
	//Printing array
	int i=0; 
	for(i=0; i<5;i++){
		printf("Value of array at index %d is %d \n", i , array[i]); 
	}
	*/
	int n; 
	printf("Enter the number of elements \n" ); 
	scanf("%d", &n); 
	int price[n]; 
	int total; 
	int i;
	for(i =0; i<n; i++){
		printf("Enter the price of %d item \n", i+1 ); 
		scanf("%d",&price[i]); 
	}
	total = sum( price , n); 
	printf("\n %d is the total", total);
	return 0; 
}

int sum(int price[], int size)
{
	int sum =0; 
	int i; 
	for(i =0; i<size; i++){

		sum += price[i]; 
		
	}
	return sum; 
}


