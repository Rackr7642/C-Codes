// Area of circle
#include<stdio.h>
#include<bits/stdc++.h>
float area_of_circle( float rad)
{
	float area;
	area = 3.14* rad * rad;
	return area;
}




int main(){
	float area , radius = 0.0; 
	
	printf("Enter the readius of the circle \n"); 
	scanf("%f", &radius ); 
	area = area_of_circle( radius);
	printf("The are of the circle with radius: %f" , radius );
	printf(" is %f", area);
	return 0;
}
