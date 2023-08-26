#include<iostream>
using namespace std; 
void replace( char input[], char str[]){
	if(input[0]=='\0'){
		return; 
	}

        if (input[0] == 'p' && input[1] == 'i') 
		{
        str[0] = '3';
        str[1] = '.';
        str[2] = '1';
        str[3] = '4';
        replace(input + 2, str + 4);
        }
        else{
		str[0]=input[0];
		replace(input+1,str+1 );
	}

}


void replacePi(char input[]) 
{
	char str[1000];
	
	replace(input,str); 
	
	int size= sizeof(str)/sizeof(char)-1; 
	int i=0; 
	
	while(str[i]!='\0'){
		input[i]=str[i];
		i++; 
	}

}

int main(){
	char input[1000];
	cout<<" Enter a string with Pi added to change it to pi in lowecase"<<endl; 
	cin.getline(input,1000);  
	replacePi(input); 
	
	cout<<input; 
	return 0;
}
