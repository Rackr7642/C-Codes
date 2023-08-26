#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *ptr; 
	float sum=0;
	ptr= (float*) malloc(3*sizeof(float));
	int i;
	for(i=0;i<3;i++){
		printf("\n Enter the values of %d ",i);
		scanf("%f", &ptr[i]); 
	}
	for(i=0;i<3;i++){
		sum = ptr[i]+sum;
	}
	
	printf("The average of three number is %f", sum/3);
	return 0;	
}
