#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
    char input[1000];
    cout<<" Enter lettr \n";
    cin.getline(input, 1000);
    int count=0; 

    
for( int i=0; input[i]!= '\0'; i++)
{
    count++;    
}


 
int i =0; 
//
while(i<count){
    int temp = input[i];
    input[i]= input[count];
    input[count]= temp;
    i++; 
    count--;
}
  cout << input << endl;


i=0; 

while(input[i]!= '\0'){
if(input[i]==' '){
 int j =0;
 int  index =i;
 while (j < index) {
   int temp = input[i];
   input[i] = input[index];
   input[index] = temp;
   j++;
   index--;
 }
}
i++;
}

    
}

