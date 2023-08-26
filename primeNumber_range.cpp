#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	int num;
	int flage =0;
	
	printf("\n Enter The Range :- ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
			flage =0;
		for(int j=2;j<=sqrt(i);j++)
		{
		
			if(i%j==0)
			{
				flage++;
			}
		}
		if(flage==0)
			printf("\n %d is a prime number ", i);
		
	}
	return 0 ;
	
}
