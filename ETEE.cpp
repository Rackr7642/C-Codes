#include<stdio.h>
#include<conio.h>
/*
struct Students {
	char name[30];
	int roll;
	float percent; 
};


int main(){
	struct Students s1;
	printf("Enter the name of Stuent \n");
	scanf("%s",&s1.name); 
	printf("Enter the roll of the stundent \n");
	scanf("%d", &s1.roll);
	printf("Enter the percentage of the stundent \n");
	scanf("%f", &s1.percent);
		
	printf(" Name is %s", s1.name); 
	printf(" Roll is %d", s1.roll);
	printf("percentage is %f", s1.percent);
	
}

*/
int fib( int n)
{
		if(n==0)
	{
		return 0;
	}
		if(n==1){
		return 1; 
		}
  return	fib(n-1)+fib(n-2); 
}

int main(){
	int n=15; 
	int i;
	for(i=0;i<n;i++){
		printf("%d", fib(i));
	}
	return 0;
	
}

