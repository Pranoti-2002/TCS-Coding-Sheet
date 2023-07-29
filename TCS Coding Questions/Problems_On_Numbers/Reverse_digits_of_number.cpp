#include<iostream>
using namespace std;

class Solution 
{
    public:

    int reverse_digits(int n)
    {
        int rev=0; 
        while(n>0)
        {
            rev=n%10+rev*10;
            n/=10;
        }
       return rev;
    }
};
int main()
{
    int n;
    cin>>n;

    Solution s;
    cout<<s.reverse_digits(n);
}
