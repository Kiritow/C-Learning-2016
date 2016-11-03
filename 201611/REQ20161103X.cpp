/** Client.h =======================*/
#include<iostream>
using namespace std;
class CLIENT
{
public:
    static void ChangeServerName()
    {
        cin>>ServerName[10];
    }
    void Result1( int c);
    void show1()
    {
        cout<<c<<endl;
    }
    void Result2( char s[10]);
    void show2()
    {
        cout<<s[10]<<endl;
    }
private:
    static int ClientNum;
    static char ServerName[10];
};

/** Client.cpp ==========================*/
#include<iostream>
#include<string>
using namespace std;
int CLIENT::c=2;
char CLIENT::s[10]="abc";
int CLIENT::ClientNum;
void CLIENT::Result1( int c)
{
    ClientNum=c;
}
char CLIENT::ServerName[10];
void CLIENT::Result2( char s[10] )
{
    ServerName[10]=s[10];
}

/** main.cpp ==========================*/
#include<iostream>
using namespace std;
int main()
{
    CLIENT b;
    cout<<"ServerName:"<<endl;
    b.show1();
    cout<<"ClientNum:"<<endl;
    b.show2();
    cout<<"ChangeServerName:"<<endl;
    CLIENT::ChangeServerName();
    return 0;
}

