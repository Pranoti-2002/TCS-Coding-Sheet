//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isPowerof3(int N){
        // code here 
        
        if(N>0)
        {
            while(N%3==0)
            {
                N/=3;
            }
        }
        if(N==1)
        {
            return "Yes";
        }
        
        return "No";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPowerof3(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends