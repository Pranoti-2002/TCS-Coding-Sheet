#include<iostream>
using namespace std;

class Solution 
{
    public:

    int sum(int n)
    {   
        int res=0;
        for(int i=1; i<=n; i++)
        {
            res+=i;
        }
        return res;
    }
}; 
int main()
{
    int n; 
    cin>>n; 

    Solution s;
    cout<<s.sum(n);
}