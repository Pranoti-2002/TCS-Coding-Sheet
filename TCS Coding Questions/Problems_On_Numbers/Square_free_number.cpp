#include<iostream>
#include<cmath>
using namespace std;

class Solution 
{
    public:

    bool isSquareFree(int n)
    {   
        if(n<=1)
        {
            return true; 
        }
        for(int i=2; i*i<=n; i++) 
        {
            if(n%(i*i)==0)
            {
                return false;
            }
        } 
        return true;  
    }
}; 
int main()
{
    int n; 
    cin>>n; 

    Solution s;
    cout<<s.isSquareFree(n);
}