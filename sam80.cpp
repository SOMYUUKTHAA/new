#include<iostream>
using namespace std;
int main()
{
    int n,n1;
    cout<<"enter number:";
    cin>>n;
    n1=n;
    while(n>0)
    {
        n1=n%10;
        if(n1%2==1)
        cout<<"\t"<<n1;
        n/=10;
    }
}
