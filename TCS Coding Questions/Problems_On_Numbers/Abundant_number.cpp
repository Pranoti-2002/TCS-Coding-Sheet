#include<iostream>
using namespace std;

class Solution
{
    public:

    bool isAbundant(int n)
    {   
        int sum=0;
        for(int i=1; i<n; i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        if(sum>n)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int n; 
    cin>>n; 

    Solution s;
    cout<<s.isAbundant(n);
}