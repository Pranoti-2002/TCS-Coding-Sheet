//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
    string isKrishnamurthy(int N) {
        // code here 
        int sum=0;
        int K=N;
        while(N!=0)
        {
            sum+=fact(N%10);
            N/=10;
        } 
        
        if(K==sum)
        {
            return "YES";
        }
        return "NO"; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends