#include<stdio.h>
#include<bits/stdc++.h>
int main(){
	int num, rem, count=0;
	int temp =0;
	printf(" Enter the binary number \n");
	scanf("%d", &num);
	while(num!=0){
		rem = num%10; 
		if(rem==1){
		temp = temp + pow(2,count);
		}
		count = count +1;
		num = num/10; 
		
		
		
	}
	printf("%d\n",temp);
	
	
	
	return 0;
}
