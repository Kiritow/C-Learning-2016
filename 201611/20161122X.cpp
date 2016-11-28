#include <iostream>
#include <string>
#include <functional>
#include <thread>
using namespace std;

#define deprecated /** deprecated */

class Object
{
public:
    virtual ~Object() {}
};

#define Interface class
#define Method(ReturnType,FunctionName,Arg1,Arguments...) public:virtual ReturnType FunctionName(Arg1,##Arguments)=0;
#define extends : public Object, public
#define noextend : public Object
Interface IDrawable
{
    Method(void,draw,void);
};
Interface IStreamable
{
    Method(void,output,void);
    Method(int,CountLen,string);
};


class A extends IDrawable
{
public:
    void draw()
    {
        cout<<"Drawing A"<<endl;
    }
};

class B noextend
{
public:
    void ndraw() deprecated
    {
        cout<<"Called B::ndraw()"<<endl;
    }
};

class C extends IStreamable
{
public:
    void output()
    {
        cout<<"This is C"<<endl;
    }
    int CountLen(string s)
    {
        return s.size();
    }
};

#define cv(Pointer,InterfaceType) (dynamic_cast<InterfaceType*>(Pointer))
#define is(Pointer,InterfaceType) (cv(Pointer,InterfaceType)!=nullptr)

int b(int a)
{
    cout<<a<<endl;
    return a;
}

int main()
{
    std::bind(b,2);

    {
        auto x=new A;
        cout<<is(x,IStreamable)<<endl;
        auto p=cv(x,IStreamable);
        if(p)
        {
            p->output();
            cout<<p->CountLen("Count This!")<<endl;
        }
    }
    {
        auto x=new B;
        cout<<is(x,IStreamable)<<endl;
        auto p=cv(x,IStreamable);
        if(p)
        {
            p->output();
            cout<<p->CountLen("Count This!")<<endl;
        }
    }
    {
        auto x=new C;
        cout<<is(x,IStreamable)<<endl;
        auto p=cv(x,IStreamable);
        if(p)
        {
            p->output();
            cout<<p->CountLen("Count This!")<<endl;
        }
    }
    B aaaa;
    aaaa.
}
