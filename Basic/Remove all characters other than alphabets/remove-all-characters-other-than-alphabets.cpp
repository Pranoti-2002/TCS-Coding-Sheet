//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here 
        string str=""; 
        
        for(int i=0; i<s.length(); i++)
        {
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z'))
            {
                str+=s[i];
            } 
        } 
        if(str.empty())
        {
            return "-1";
        }
        return str;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.removeSpecialCharacter(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends