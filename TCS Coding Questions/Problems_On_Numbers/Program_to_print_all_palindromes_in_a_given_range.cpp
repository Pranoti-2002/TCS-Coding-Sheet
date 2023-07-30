#include<iostream>
using namespace std;

class Solution
{
    public:

    bool isPalindrome(int n)
    {
        int k=n , rev=0;
        while(n>0)
        {
            rev=rev*10+n%10;
            n/=10;
        } 
        if(k==rev)
        {
            return true;
        }
        return false;
    }
    void print(int min , int max)
    {
        for(int i=min; i<=max; i++)
        {
            if(isPalindrome(i))
            {
                cout<<i<<" ";
            }
        }
    }
};
int main()
{
    int min , max;
    cin>>min>>max;

    Solution s;
    s.print(min , max);
}