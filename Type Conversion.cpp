#include<stdio.h>


int main() {
// implicit conversion
    int sum , sum_1; 
    char letter = 'a';
	sum = letter + letter;
	printf( "Sum = %d \n" , sum);
	
// explicit conversion
    
    sum_1 = (int)letter + (int)letter; 
    printf ("Sum = %d \n", sum_1 );
    return 0; 
	
}

