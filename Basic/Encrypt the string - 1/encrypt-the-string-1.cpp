//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string encryptString(string s){ 
    // code here
        string str="";
        int count=1;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            } 
            else{
                str+=s[i]+to_string(count);
                count=1;
            }
        }
        
        reverse(str.begin() , str.end());
        return str;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}

// } Driver Code Ends