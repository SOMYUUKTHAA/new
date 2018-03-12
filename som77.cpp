#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int res,i;
    cout<<"enter number:";
    cin>>n;
    cout<<"\nFactors are:";
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<"\t"<<i;
    }
}
