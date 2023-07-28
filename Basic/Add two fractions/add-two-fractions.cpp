//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}

// } Driver Code Ends


/*You are required to complete this function*/ 
int gcd(int a , int b)
{   
    int res=1;
    for(int i=1; i<=a && i<=b; i++) 
    {
        if(a%i==0 && b%i==0)
        {
            res=i;
        }
    } 
    return res;
}
void addFraction(int num1, int den1, int num2,int den2)
{
//Your code here 
   
   int a=(num1*den2)+(num2*den1);
   int b=den1*den2; 
   
   int common=gcd(a, b); 
   
   int num=a/common; 
   int den=b/common;
   
   cout<<num<<"/"<<den<<endl;
 
 }