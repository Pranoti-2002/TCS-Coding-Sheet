#include<iostream>
#include<climits>
using namespace std;

class Solution
{
    public:

    void LargestAndSmallestDigits(int n)
    {
        int largest=INT_MIN;
        int smallest=INT_MAX;

        while(n>0)
        {
            int rem=n%10;

            largest=max(rem , largest);
            smallest=min(rem , smallest);
            n/=10;
        }
        cout<<smallest<<" "<<largest;
    }
};
int main()
{
    int n;
    cin>>n; 

    Solution s;
    s.LargestAndSmallestDigits(n);
}