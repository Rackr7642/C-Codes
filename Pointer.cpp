#include<iostream>
#include<stdio.h>
int main()
{
	int car = 24; 
	//int *ptr = &car; 
//	int *ptr; 
	
	/*
	ptr = &car; 
	printf("%d \n", *ptr); // print value at address
	printf("%p \n", *ptr);
	printf("%u \n", ptr);
	printf("%p \n", &car); //print address
	printf("%p \n", &ptr ); // print address of the pointer itself
	printf("%d \n", *(&car)); // alternate to *ptr
	*/
		/*
	ptr = &car; 
	*ptr = 0; // value re-intialised at the address i.e value is changed at car.
	printf("%d", *ptr); 
	printf("%d", car); 
	printf("%d", (*ptr)++);//prints the value at address first then increments
	printf("%d", car); //print value after incremented
	printf("%d", *ptr++ ); // would not increment the value
	printf("%d", car);
	
	
	//Pointer to Pointer
	int price = 2500; 
	int	*ptr = &price; 
	int **pptr = &ptr; 
	
	printf("%d", *ptr); // print value at address that ptr is storing i.e price
	printf("%d", **pptr); //print address of value that ptr is storing 
	printf("%d", ptr); //print address of price stored in ptr
	printf("%d", pptr); //prints address of ptr
	printf("%d", *pptr); //prints value of ptr

	*/

     int i=15;  
    void *ptr;
    ptr=&i;  
    printf("%d",*(int*)ptr);
    
    return 0;  

}
