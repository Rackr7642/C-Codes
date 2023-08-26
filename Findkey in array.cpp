#include<stdio.h>

void find(int Array[], int Size, int key){
int i;  
	for( i =0; i< Size; i++)  
  if( Array[i]== key)  {  
    printf("Yes, it is in Array. Array[%d]=%d\n", i, Array[i]);  
    break;  
  }  
  else{
  	printf("Not found \n");6
  }
	
}

int main() {  
 int i;  
 int Array[ ] = {50,12,13,15, 4,40 ,60, 30,85,40};  
 int key ; // key is number to be searched  
 int Size = sizeof(Array) / sizeof(int);  
 printf("Enter the number to be searched in Array: 50 12 13 15 4 40 60 30 85  40 \n");  
 scanf("%d", &key);  
 find(Array,Size, key); 
 
//  printf("The number is not in Array.\n");  
  //End:  
  return 0; 
}
