#include<iostream>
#include<cmath>
using namespace std;

class Solution
{ 
    public:

    void findRoots(double a , double b , double c)
    { 
        double discriminant=(b*b)-(4*a*c);
        if(discriminant>0)
        { 
            int root1=(-b+sqrt(discriminant))/(2*a);  
            int root2=(-b-sqrt(discriminant))/(2*a); 

            cout<<"Root1 :"<<root1<<endl;
            cout<<"Root2 :"<<root2<<endl;
        } 
        else if(discriminant==0)
        { 
            int root=-b/(2*a);
            cout<<"Root :"<<root<<endl;
        } 
        else{ 
            cout<<"No valid roots"<<endl;
        }
    }
}; 

int main()
{ 
    double a , b , c;
    cin>>a>>b>>c;

    Solution s;
    s.findRoots(a , b , c);
    return 0;
}