#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Solution
{
    public:

    bool isPrime(int n)
    {
        if(n<=1)
        {
            return false;
        }
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    } 
    int countNumber(int n)
    {
        vector<int>PrimeNumbers;
        for(int i=2; i<=n; i++)
        {
            if(isPrime(i))
            {
                PrimeNumbers.push_back(i);
            }
        } 
        int sum=PrimeNumbers[0];
        int count=0;
        for(int i=0; i<PrimeNumbers.size(); i++)
        {
            sum+=PrimeNumbers[i];
            if(sum>n)
            {
               break;
            } 
            if(isPrime(sum))
            {
               count++;
            } 
        } 
        return count;
    }
}; 
int main()
{
    int n;
    cin>>n; 

    Solution s;
    cout<<s.countNumber(n);
}