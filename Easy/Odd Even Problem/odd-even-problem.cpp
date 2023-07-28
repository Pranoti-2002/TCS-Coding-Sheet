//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string oddEven(string S) {
        // code here 
        int count_x=0 ,count_y=0;
        
        map<char , int>mp;
        
        for(int i=0; i<S.length(); i++)
        {
            mp[S[i]]++;
        } 
        
        for(auto x: mp)
        {
            if((x.second%2==0) && ((x.first-96)%2==0))
            {
                count_x++; 
            } 
            if((x.second%2!=0) &&((x.first-96)%2!=0))
            {
                count_y++;
            }
        } 
        if(((count_x+count_y)%2)==0)
        {
            return "EVEN";
        }
        
        return "ODD";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.oddEven(S) << endl;
    }
    return 0;
}

// } Driver Code Ends