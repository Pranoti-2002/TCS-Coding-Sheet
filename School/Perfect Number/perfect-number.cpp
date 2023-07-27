//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public: 
    
    int fact(int n)
    {
        if(n==0)
        {
            return 1; 
        }
        return n*fact(n-1);
    }
    int isPerfect(int N) {
        // code here 
        int k=N;
        int sum=0;
        while(N!=0)
        {
            sum+=fact(N%10);
            N/=10;
        }  
        if(k==sum) 
        {
            return true;;
        }
        return false;;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends