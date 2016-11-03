#include <iostream>
#include <string>
using namespace std;



class Client
{
public:
    static void ChangeServerName(string Name);
    Client();
    ~Client();
public:
    static string ServerName;
    static int ClientNum;
};

string Client::ServerName;
int Client::ClientNum;
void Client::ChangeServerName(string Name)
{
    Client::ServerName=Name;
}
Client::Client()
{
    Client::ClientNum++;
}
Client::~Client()
{
    Client::ClientNum--;
}

int main()
{
    Client a;
    string xx;
    cin>>xx;
    a.ChangeServerName(xx);
    cout<<"ServerName is : "<<Client::ServerName<<endl;
    return 0;
}
