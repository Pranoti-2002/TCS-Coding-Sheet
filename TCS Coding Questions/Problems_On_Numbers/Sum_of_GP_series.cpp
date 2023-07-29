#include<iostream>
#include<cmath>
using namespace std;

class Solution
{ 
    public:
    float sum1(float a , float r , float n) 
    {   
        return  (a * (pow(r, n)-1) / (r-1));   
    }

    float sum2(float a, float r , float n)
   { 
       float sum=0;
       int term=a;
       for(int i=0; i<n; i++)
       { 
           sum+=term;
           term*=r;
       }
       return sum;
   }
}; 
int main()
{ 
    int a , r , n;
    cin>>a>>r>>n;
    Solution s;
    cout<<"Sum of GP series:"<<s.sum1(a , r, n)<<endl;
    cout<<s.sum2(a , r , n); 
    return 0;
}  
