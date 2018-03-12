#include<iostream>
using namespace std;
int main()
{
    int n1,n2,res;
    cout<<"enter two numbers:";
    cin>>n1>>n2;
    res=n1*n2;
    n1*=n1;
    if(res==n1)
    cout<<"Yes";
    else
    cout<<"No";
}
