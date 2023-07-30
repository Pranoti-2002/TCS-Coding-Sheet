#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

class Solution
{
    public:

    int largest_factor(int n , int k)
    {   
        vector<int>factors; 
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                factors.push_back(i);
            }
        }
        sort(factors.begin() , factors.end() , greater<int>());
        return factors[k-1]; 
    }
};
int main()
{
    int n , k;
    cin>>n>>k;

    Solution s;
    cout<<s.largest_factor(n , k);
}