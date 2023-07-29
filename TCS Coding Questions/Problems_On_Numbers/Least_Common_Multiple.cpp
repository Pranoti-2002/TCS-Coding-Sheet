#include<iostream>
using namespace std; 

class Solution
{
    public:

    int gcd(int a , int b)
    {   
        int res;
        for(int i=1; i<=a && i<=b; i++)
        {
            if(a%i==0 && b%i==0)
            {
                res=i;
            }
        }
        return res;
    }
    int lcm(int a , int b)
    { 
       int result=(a*b)/gcd(a,b);
       return result;
    }
};
int main()
{
    int a , b;
    cin>>a>>b;

    Solution s;
    cout<<s.lcm(a , b);
}
