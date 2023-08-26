#include<stdio.h>
#include<bits/stdc++.h>

void reverse( int num_1);
void reverse_one_var( int num_2 );

int main(){
	int num;
	printf("Enter the number you want to reverse \n");
	scanf("%d", &num); 
	reverse(num);
	reverse_one_var(num);
	return 0;
}

void reverse(int num_1){
	int rem;
	while(num_1!=0){
		rem = num_1%10;
		printf("%d", rem);
		num_1= num_1/10;
		
	}
	
}	
	
void reverse_one_var(int num_2){
	int temp =1;
	int rem;
	while (num_2!=0)
	{
	rem = num_2%10;
	temp = (temp*10)+rem;	
	}
	printf("%d ====\n", temp);	
	
}	
	



