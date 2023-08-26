#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) 
{

    char last =input[0]; 
    int i=0; 
    int j=1; 
    int count =0; 
    while(input[i]!='\0'){
        
        if(input[i]==last)
        {
            count++; 
           
        }
        else if(count>1)
        {
            cout<< count; 
			input[j]=count; 
            j++;
            input[j]=input[i]; 
            last= input[i]; 
            j++; 
            count=1; 
            
        }
        else
        {
            input[j]=input[i];
            last = input[j];
            
            j++;
            count=1; 

        }
        i++; 
    }
   
   
    
}


int main() {
    int size = 1e6;
    string str;
    cin >> str;
   str = getCompressedString(str);
  cout << str << endl;

}
