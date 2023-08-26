#include<iostream>
using namespace std; 

int fibonacci ( int n ) {

	 if (n==0) {
	 	
	 	cout<< n; 
	 	return 0;  

	 }	
	 
	 int add = fibonacci(n-1);
	 int value = add + n; 
	 cout<< value;
	 return add; 
}

int main()
{

int n;
cout<< "enter n";
cin>> n; 

fibonacci(n); 	

return 0; 
}
