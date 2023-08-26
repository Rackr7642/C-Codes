// fibonacci series
#include<stdio.h>
#include<bits/stdc++.h> 
int main()
{
	int n=10, first =0 , second=1, third=0;
	printf("%d %d", first ,second);
	for ( int i=1; i<n-2; i++) {
		
		third = first +second; 
		first = second;
		second = third;
		printf("%d",third);
		
		
	} 
}
