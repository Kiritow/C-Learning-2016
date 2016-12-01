#include <iostream>
#include <cstring>
using namespace std;
#define af(type,name) private:type name
#define op(name) cout<<#name<<": "<<name<<endl
#define sf(name) cout<<"Please Input "<<#name<<endl;cin>>name
#define tdf(mtype,asz,name) public:typedef mtype name[asz]
typedef struct{int y,m,d;}_b;
ostream& operator << (ostream& os,_b& x) { os<<x.y<<"-"<<x.m<<"-"<<x.d; return os;}
istream& operator >> (istream& is,_b& x) { is>>x.y>>x.m>>x.d; return is;}
class people
{
    tdf(char,16,w);
    tdf(char,11,x);
    tdf(char,7,y);
    tdf(char,3,z);
    af(w,id);
    af(x,name);
    af(y,number);
    af(z,sex);
    _b birth;
public:
    inline people& input()
    {
        sf(id);sf(name);sf(number);sf(sex);sf(birth);
        return *this;
    }
    people& show()
    {
        op(id);op(name);op(number);op(sex);op(birth);
        return *this;
    }
    people() { input();}
    people(people& inc)=default;
    ~people()=default;
};



class student : virtual public people
{
    af(x,classno);
public:
    inline student& input()
    {
        sf(classno);
        return *this;
    }
    student& show()
    {
        people::show();
        op(classno);
        return *this;
    }
    student() {input();};
};
class teacher : virtual public people
{
    tdf(char,21,v);
    af(v,department);
    af(x,principalship);
public:
    inline teacher& input()
    {
        sf(department);
        sf(principalship);
        return *this;
    }
    teacher& show()
    {
        people::show();
        op(department);
        op(principalship);
        return *this;
    }
    teacher() {input();};
};

class graduate : virtual public student
{
    tdf(char,21,vv);
    af(vv,subject);
    af(vv,adv);
public:
    inline graduate& input()
    {
        sf(subject);
        sf(adv);
        return *this;
    }
    graduate& show()
    {
        student::show();
        op(subject);
        op(adv);
        return *this;
    }
    graduate() {input();};
};

class TA : virtual public graduate, virtual public teacher
{
public:
    TA& show()
    {
        graduate::show();
        teacher::show();
        return *this;
    }
    TA() {};
};
int main()
{
    TA a;
    a.show();
    return 0;
}
