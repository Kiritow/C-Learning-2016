#include <iostream>
using namespace std;
template<typename T>
void print(T t)
{
    cout<<t<<" ";
}
template<typename T,typename... Args>
void print(T t,Args&&... args)
{
    cout<<t<<" ";
    print(args...);
}
template<typename T>
void readin(T& t)
{
    cin>>t;
}
template<typename T,typename... Args>
void readin(T& t,Args&&... args)
{
    cin>>t;
    readin(args...);
}

int main()
{
    int a;
    double b;
    char c[128];
    fill(c,c+128,0);
    readin(a,b,c);
    print(a,b,c);
    return 0;
}

/**************************************************************/
#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Store
{
private:
    T a;
public:
    void set(T val)
    {
        a=val;
    }
    T get()
    {
        return a;
    }
};
int main()
{
    Store<int> S1;
    Store<double> S2;
    Store<string> S3;
    Store<Store<int>> d;
    return 0;
}

/**************************************************************/
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int x;
    deque<int> A;
    for(int i=0;i<5;i++){cin>>x;A.push_back(x);}
    deque<int> B;
    for(int i=0;i<5;i++){cin>>x;B.push_back(x);}
    for(auto& t:B)
    {
        A.push_back(t);
    }
    for(auto& n:A)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}


