#include<iostream>
using namespace std;
int main()
{
    int n1,n2,res,i,j,a,flag=0;
    cout<<"enter two numbers:";
    cin>>n1>>n2;
    res=n1*n2;
    for(i=1;i<res;i++)
    {
        a=i*i;
        if(res==a)
        flag=1;
    }
     if(flag==1)
    cout<<"Yes";
    else
    cout<<"No";
}
