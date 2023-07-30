#include<iostream>
using namespace std;

class Solution
{
     public: 

    int sumOfDivisors(int n)
    {
        int sum=0; 
        for(int i=1; i<n; i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        } 
        return sum;
    } 

    bool isAbundant(int n)
    {
        if(sumOfDivisors(n)>n)
        {
            return true;
        }
        return false;
    } 

    bool isPrimitiveAbundant(int n)
    {
        for(int i=1; i<n; i++)
        {
            if(isAbundant(i) && sumOfDivisors(i)<=sumOfDivisors(n))
            {
                return true;
            }
        }
        return false;
    }
}; 

int main()
{
    int n; 
    cin>>n; 

    Solution s;
    cout<<s.isPrimitiveAbundant(n);
}
