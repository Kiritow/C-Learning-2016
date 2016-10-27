#include <iostream>
using namespace std;
int main()
{
    int x,y,n0,m,i,n;
    cin>>x>>y>>n0>>m;
    for(i=1;i<=m;i++)
    {
        cin>>n;
        n0=n0+n;
        while(n0<x)
        {
            n0=n0+y+1;
        }
        while(n0>y)
        {
            n0=n0-(y+1);
        }
        cout<<n0;
        if(i!=m)
        cout<<endl;

    }

}

