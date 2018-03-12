#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,count=0;
    int res,i;
    cout<<"enter number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2 || count==1)
    cout<<"No composite";
    else
    cout<<"Yes composite";
}
