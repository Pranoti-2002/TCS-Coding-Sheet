//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    // your code here
    string str="";
    
    while(N!=0)
    {
        int a=N%2;
        str+=to_string(a);
        N/=2;
    } 
    for(int i=str.length()-1; i>=0; i--)
    {
        cout<<str[i];
    }
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends