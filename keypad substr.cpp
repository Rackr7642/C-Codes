#include<iostream>
#include <string>
using namespace std;


int skeypad(int num, string output[], string input[]){
   //Defining base case: 

if(num==0 || num==1){
        output[0]=""; 
        return 1; 
    }
    
     
    
    int key =skeypad(num%10, output,input); 
     
    int k=0; 
    while(k<3)
    {
    for(int i=0; i<key; i++){
        output[i+key]= inputnum].substr(k,1) +output[i];
    }
    k++;
    key=key+k;
  
    }

    return 2*key;
}

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    string input[10]   = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; 
    int count = skeypad(num, output, input);
    return count; 

}


int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    //cout<<count; 
    return 0;
}

