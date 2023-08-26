#include<stdio.h>
#include<bits/stdc++.h>

int switch_case( int input);

int main(){
	
	int num1;
	printf("Enter numbers between 1-7 to print \n");
	scanf("%d",&num1);
	switch_case(num1);
}

int switch_case(int input)
{
	switch(input) 
	{
		case 1: 
		printf("Today is Sunday"); 
		break;
		
		case 2: 
		printf("Today is Monday");
		break;
		
		case 3: 
		printf("Today is Tuesday");
		break;
		
		case 4: 
		printf("Today is Wednessday");
		break;
		
		case 5: 
		printf("Today is Thursday");
		break;
		
		case 6:
		printf("Today is Friday");
		break;
		
		case 7:
		printf("Today is Saturday");
		break;
		
		default:
		printf("Invalid input");	
	
		
	}
}
