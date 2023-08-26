#include<stdio.h>
#include <bits/stdc++.h>
// conversion through temp

int swap_1 ( int num1 , int num2); //Function prototype

int main(){
	
	int num_1; 
	int num_2;
    printf( "Enter the numbers you want to swap"); 
	scanf( "%d %d" , &num_1, &num_2); 
	swap_1(num_1,num_2);		
	return 0;
}

int swap_1 ( int num1 , int num2)  //Function definiton
{
	int temp; 
	
	temp = num1; 
	num1=num2;
	num2=temp;
	printf(" After swap, num1 = %d \n" , num1 );
	printf("After swap, num2 = %d \n", num2); 
	return 0;
}


