/// Request From LiFei on 20161028
#include <iostream>
using namespace std;

int In(int n,int x)
{
    int f=0;
    if(x<=1)
        f=n;
    else
        f=n*In(n,x-1);
    return f;
}
double Sh(double n,int x)
{
    double f=0;
    if(x<=1)
        f=n;
    else
        f=n*Sh(n,x-1);
    return f;
}
int main()
{
    int n,x;
    double s;
    cin>>n>>s>>x;
    cout<<In(n,x)<<" "<<Sh(s,x);
    return 0;
}
