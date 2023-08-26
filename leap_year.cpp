#include<stdio.h>
#include<bits/stdc++.h> 

int check_leapyear( int year);

int main(){
	
	int year; 
	
	printf("Enter the year you want to check leap year of: \n");
	scanf("%d", &year);
	check_leapyear(year);
	return 0;
}

int check_leapyear( int year)
{
	if(year % 4 == 0 && year % 400 == 0){
	printf("%d is a leap year \n",year);
		
	}
	else{
	printf("%d is not a leap year \n", year);
	}
	return 0;
}
