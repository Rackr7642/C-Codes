//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string longest(string names[], int n)
    {
        int i=0;
        string ans;
        int max = -1; 
        while(i<n){
            
            if(max < names[i].size())
            {
                max = names[i].size();
                cout<<max; 
                ans = names[i]; 
            }
            i++;
        }
        
    
        return ans; 
    }
};

//{ Driver Code Starts.

int main()
{

		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;

}

// } Driver Code Ends
