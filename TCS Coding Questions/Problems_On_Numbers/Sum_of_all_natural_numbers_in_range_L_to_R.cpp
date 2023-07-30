#include<iostream>
using namespace std;

class Solution 
{
    public:

    int sum(int l , int r)
    {   
        int res=0;
        for(int i=l; i<=r; i++)
        {
            res+=i;
        }
        return res;
    }
};
int main()
{
    int l , r; 
    cin>>l>>r;

    Solution s;
    cout<<s.sum(l , r);
}