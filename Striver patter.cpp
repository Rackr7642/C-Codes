#include<iostream>
using namespace std; 

int main(){
	//generating general pattern
	
	
	int num1; 
	cout<< "Enter the value of number or N to print all 21 Striver Patterns \n";
	cin>>num1; 
	
	//Square Pattern
	cout<<"1.Square Pattern "<<endl;
	 
	 for (int i=0; i<num1; i++)
	 {
	 	for(int j=0; j<num1; j++)
	  	{
	  		cout<<"*"; 
		  }
		  cout<<endl; 
	 }
	 
	 
	 cout<<endl; 
	 cout<<endl;
	//Right angle triangle patter
	cout<<"2.Right-Angle Triangle Pattern: "<<endl;
	for(int i=0; i<num1; i++){
		for(int j=0; j<=i; j++){
			cout<<"*"; 
		}
		cout<<endl;
	}
	cout<<endl; 
	 cout<<endl;
	// Right angle triangle 12 pattern
	cout<<"3.Right Angle Traingle 12: "<<endl;
	for(int i=0; i<num1; i++){
		for(int j=0; j<=i; j++){
			cout<<i; 
		}
		cout<<endl; 
	}
	cout<<endl; 
	 cout<<endl;
	for(int i=0; i<num1; i++){
		for(int j=0; j<=i; j++){
			cout<<j; 
		}
		cout<<endl; 
	}
	
	cout<<endl;
	cout<<endl; 
	
	//Reverse Pattern Traingle
	cout<<"4.Reverse Right Angle Traingle: "<<endl;
	for(int i=num1; i>0; i--)
	{
	for(int j=i; j>0; j--){
		cout<<"*";
	}	
	cout<<endl; 
	}
	cout<<endl; 
	cout<<endl;

 	//	Reverse 12345
 	cout<<"5.Reverse 12345 Traingle: "<<endl;
	 for(int i=num1; i>0; i--)
	 {
 	for(int j=1;j<=i; j++ ){
 		cout<<j;	
		 }
 		cout<<endl;	
	 }
	cout<<endl; 
	cout<<endl;  
	
	//Half-diamond
	cout<<"6.Half-Diamond: "<<endl;
	for(int i=1 ;i<=num1; i++){
		
		for(int j=num1-i; j>0;j--)
		{
			cout<<" "; 
		}
		
		for(int j=1; j<=(i*2)-1; j++){
			cout<<"*";
		}
		
		
		cout<<endl; 
	}

	cout<<endl; 
	cout<<endl; 
	//Upside Down Half-Diamond
	cout<<"7.Upside Down Half-Diamond: "<<endl;
	for(int i=0; i<num1; i++){
		
		for(int j=0; j<i; j++){
			cout<<" "; 
		}
		for(int j=((num1-i)*2)-1; j>0; j--)
		{
			cout<<"*"; 
		}
		
		cout<<endl; 
	}
	cout<<endl;
	cout<<endl;
//Full Diamond
	cout<<"8.Full Diamond: "<<endl;
	for(int i=1; i<=num1; i++){
		
		int j=num1-i;
	
		for(int j=num1-i; j>0;j--){
			cout<<" ";
		}
		for(int j=0; j<(i*2)-1; j++){
		cout<<"*";	
		}
		
		cout<<endl; 
		
	}
	for(int i=0; i<num1; i++){
		
		for(int j=0; j<i; j++){
			cout<<" "; 
		}
		for(int j=((num1-i)*2)-1; j>0; j--)
		{
			cout<<"*"; 
		}
		
		cout<<endl; 
	}
	
	
	
	cout<<endl; 
	cout<<endl; 
	//Half-full diamond
	cout<<"9.Half-full Diamond: "<<endl;
	int k=1;
	for(int i=0; i<num1*2-1;i++){
		
		if(i<num1){
			
		for(int j=0; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
		}
		else{
			for(int j=num1-k; j>0 ; j--){
				cout<<"*";
			}
			k++;
			cout<<endl;
		}
		
		
	}
	
	
	
	cout<<endl; 
	cout<<endl;
	
	//Pattern 10101
	
	/* 1
	   01
	   101
	   0101
	   10101
	*/
	cout<<"10.Stupid 101 Pattern "<<endl;
	for(int i=0; i<num1; i++){
		for(int j=0; j<=i;j++)
		{
			if((i%2==0 && j%2==0)||(i%2!=0&&j%2!=0)){
				cout<<1;
			}
			else if(i%2==0 &&j%2!=0){
				cout<<0; 
			}
			else{
				cout<<0; 
			}
			
		}
		cout<<endl;
			
		
	}
	
	cout<< endl; 
	cout<< endl; 
	
	cout<<"11.Wierd 123 Pattern: "<<endl;
	for(int i =1; i<=num1; i++){
		for(int j=1, k=0; j<=i||k<num1; j++,k++)
		{
			if(j<=i){
			cout<<j;
			}
			
			
			if(j>i)
			{
			cout<<"  ";
			} 
			 
			
		}
		for(int j=i; j>0; j--)
		{
			cout<<j; 
		}
		
		
		
		cout<<endl;
	}
	
	
	cout<<endl;
	cout<<endl; 
	cout<<"13.Right Angle Traianle with 1234"<<endl;
	int a=1; 
	for(int i=1; i<=num1; i++){
		for(int j=0; j<i; j++){
			cout<<a++;
			cout<<" ";
			 
		}
		cout<<endl;
	}
	
	
	cout<<endl;
	cout<<endl;
	
	//ABCDE Triangle
	cout<<"14.ABCDE Traingle: "<<endl;
	char ch=65;
	for(int i=0; i<num1; i++){
		for(int j=0; j<=i; j++){
			cout<<char(ch+j); 
		}
		cout<<endl; 
	} 
	
	cout<<endl; 
	cout<<endl; 
	
	cout<<"15.ABCDE Reverse Traingle: "<<endl;

	for(int i=num1; i>0; i--){
	   k=0; 
		for(int j=i; j>0; j--){
			cout<<char(ch+k);
			k++; 
		}
		cout<<endl; 
	}
	
	cout<<endl;
	cout<<endl; 
	
	cout<<"16.ABCDE Traingle Variation 2: "<<endl;
	
	for(int i=0; i<num1; i++)
	{
		
		for(int j=0; j<=i; j++){
			cout<<ch;
		}
		cout<<endl;
		ch++; 
	}
	cout<<endl; 
	cout<<endl; 
	
	cout<<"17.ABA half Diamond"<<endl; 
	
	for(int i=0; i<num1; i++){
		ch=65; 
		int j=0; 
		//space
		for(j=num1-1-i; j>0; j--)
		{
			cout<<" ";
			
		}
		
		for( j=0; j<=i; j++){
			cout<<char(ch+j);
			k=j; 
		}
		for(k=k-1; k>=0; k--){
			cout<<char(ch+k); 
		} 
		
		
		
		cout<<endl; 
	}
	
	cout<<endl; 
	cout<<endl; 
	
	cout<<"18.Backwards Right Angle Triangle"<<endl;
	
	
	for(int i=1; i<=num1; i++){
		char chn= 65+num1-i;
		for(int j=0; j<i; j++){
			cout<<char(chn+j)<<" ";
		}
		cout<<endl; 
	} 
	
	
	cout<<endl; 
	cout<<endl; 
	
	cout<<"19.Empty Diamond Pattern"<<endl; 
	
	for(int i=0; i<num1; i++){
		for(int j=num1*2-i;j>0; j--){
			
			if(j>num1){
			cout<<"*";
			}
			 
			 
			else if(j<=num1 && j>num1-i)
			{
			cout<<"  ";	
			}
			else{
				cout<<"*"; 
			}
		
		}
		cout<<endl; 
		}
			for(int i=0; i<num1; i++){
			for(int j=0; j<num1*2; j++){
				if(j<=i){
					cout<<"*";
					
				}
							
				else if(j>i&&j<num1*2-i-1){
					cout<<" "; 
				}
				
				else{
					cout<<"*"; 
				}
		
			
		}	
		cout<<endl; 
		}
		
		
		cout<<endl; 
        cout<<endl; 
			
		cout<<"20.Reverse empty half-diamond"<<endl; 
		for(int i=0; i<num1; i++){
			for(int j=0; j<num1*2; j++){
				if(j<=i){
					cout<<"*";
					
				}
							
				else if(j>i&&j<num1*2-i-1){
					cout<<" "; 
				}
				
				else{
					cout<<"*"; 
				}
			}  cout<<endl; 
		
			}
		for(int i=1; i<num1; i++){
		for(int j=num1*2-i;j>0; j--){
			
			if(j>num1){
			cout<<"*";
			}
			 
			 
			else if(j<=num1 && j>num1-i)
			{
			cout<<"  ";	
			}
			else{
				cout<<"*"; 
			}
		  
		}
		
		cout<<endl;
		
		}
		cout<<endl; 
		cout<<endl; 
		
	cout<<"21. Square Star Even Odd Pattern"<<endl;
	
	
	for(int i=0; i<num1; i++){
			//for first and last row
		if(i==0 || i==num1-1){
		for(int j=0; j<num1; j++){
			cout<<"*";
		}	
		cout<<endl; 
		}
		
		else if(i%2!=0)
		{
		for(int j=0; j<num1; j++){
			cout<<" ";
		}
		cout<<endl; 
		}	
		
		else
		{
			for(int j=0; j<num1; j++){
				if(j==0||j==num1-1){
					cout<<"*"; 
				}
				else{
					cout<<" "; 
				}
			}
			cout<<endl; 			
			
	}
		
		}
		
		cout<<endl; 
		cout<<endl;	
	

		
		
	return 0; 
}
