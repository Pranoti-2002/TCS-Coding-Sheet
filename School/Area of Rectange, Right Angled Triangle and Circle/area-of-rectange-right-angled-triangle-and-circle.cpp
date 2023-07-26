//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> getAreas(int L , int W , int B , int H , int R) {
        // code here 
        
        vector<int>ans;
        int ar=L*W;
        
        int art=0.5*(B*H);
        
        int ac=3.14*(R*R);
        
        ans.push_back(ar);
        ans.push_back(art);
        ans.push_back(ac); 
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L,W,B,H,R;
        
        cin>>L>>W>>B>>H>>R;
        
        Solution ob;
        vector<int> ans = ob.getAreas(L,W,B,H,R);
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    }
    return 0;
}
// } Driver Code Ends