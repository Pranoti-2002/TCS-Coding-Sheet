//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here 
        
        int sum=0; 
        
        while(N!=0)
        {
            int rem=N%10;
            sum+=rem; 
            N/=10;
        } 
        
        string str=to_string(sum);
        string rev=str;
        reverse(rev.begin() , rev.end());
        if(str==rev)
        {
            return 1;
        }
        
        return 0;
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
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends