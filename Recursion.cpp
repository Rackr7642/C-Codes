//Recursion is when we call a function by over and over calling it. 
// In recursion functions call itself inorder to break a big problem into small proble. I would like to call it a function loop. 

// First define the base case to avoid stack oveflow and segmentation fault as the code we run infinetly without it. 
// After base case we call the recursion function (recursive relation)
//Program to print factorial of n; 


#include<iostream>
using namespace std; 
#include<bits/stdc++.h>

//compute Factorial

int factorial(int num)
{
	
	if(num==0){
		return 1; 
	}
	
	
	return factorial(num-1)*num; 
}
/*
// to compute n*n;
int compute( int x, int n){
	int input = 0;
	int output = 0;
	if(n==0){
		return 1; 
	}
	input = compute(x,n-1);
	output = input *x; 
	return output;	
}

// To print 1 to n;
void count( int n){

	if (n==0){
		return;
	}
	cout<< n << " "; //prints in decending order
	cout<<endl;
	count (n-1);	
	cout<<n <<" "; // prints in ascending order
	
	
} 
 
 */
 
 
 
int main(){
	int answer = 0;
	int num;
	cout<< "Enter the number to print factorial" << endl; 
	cin>> num;
	answer = factorial(num); 
//	answer = compute(num, num);
   // count(num);
	cout<<  "The factorial is "<< answer;	

	return 0; 
	
} 





