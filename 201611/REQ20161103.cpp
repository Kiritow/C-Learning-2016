#include <iostream>
#include <string>
using namespace std;



class Client
{
public:
    static void ChangeServerName(string Name);
public:
    static string ServerName;
    static int ClientNum;
};

string Client::ServerName;
void Client::ChangeServerName(string Name)
{
    Client::ServerName=Name;
}

int main()
{
    Client a;
    a.ChangeServerName("Hi");
    return 0;
}
