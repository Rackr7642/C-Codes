#include<iostream>
using namespace std; 
int main(){
	int X; 
	cin>>X;  
	int arr[32] ={0};
         int i=32; 
         while(X>0){
             arr[i]=X%2; 
             i--; 
             X=X/2; 
         }
        for(int i=0; i<32; i++){
            cout<<i; 
        }
        
    }

