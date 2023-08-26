#include<iostream>
using namespace std;

void patternwithfor1(int num);
void patternwithwhile1(int num2);

int main() {
	
	int n; 
	cout<< " Enter n" << endl; 
	cin>> n;
	patternwithfor1(n);
	patternwithwhile1(n);
 
}
void patternwithfor1( int num)
	{
		
		for (int i=1 ; i<num+1 ; i++) {
			for (int j=0; j<i; j++){
				cout<<"*";
			} 
			cout<<endl; 
		}
	
	}
	
	
void patternwithwhile1(int num2){
	int k=1;
	int i=0; 
	while(i<num2+1){
		int j=0;
		while (j<i){
			cout<<k;
			k=k+1;
			
		j++;
		}
		cout<<endl;
		i++;
	}
	
}
