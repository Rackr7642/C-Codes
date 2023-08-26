#include<stdio.h>
#include<bits/stdc++.h>
int main(){
	int num, rem, count=0; 
	int num2;
	printf("Enter the number you want to check \n");
	scanf("%d", &num);
	num2=num;
	while(num!=0){
		num =num/10; 
		count = count+1;
		
	}
	num=num2;
	int temp=0;
	while(num!=0){
		rem = num%10;
		temp = temp+pow(rem,count);
		num=num/10;
	}
    if ( num2==temp){
    	printf("the entered number is an armstrong number\n");
    	
	}
	else
	{
		printf("its not an armstrong number");
	}
	return 0;
}
