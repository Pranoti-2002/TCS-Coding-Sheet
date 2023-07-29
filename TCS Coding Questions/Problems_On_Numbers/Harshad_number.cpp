#include<iostream>
using namespace std;

class Solution
{   
    public:

    bool isHarshad(int n)
    {
       int sum=0; 
       int k=n;
       while(n>0)
       {
          int rem=n%10;
          sum+=rem;
          n/=10;
       }  
       if(k%sum==0) 
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
    cout<<s.isHarshad(n);
}
