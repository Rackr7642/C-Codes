#include<iostream>
using namespace std; 
int main(){
	string str = "ayushsinha";
	int num = 'a';
	string ans=""; 
	
	
	for(int i=0; i<str.size(); i++){
		
		if(i%2==0)
		{
			int diff= (int)str[i]-97;
			str[i]= (char)diff+65; 
			
		}
		ans+=str[i]; 
	}
	
	
	cout<<ans;
	return 0; 
}
