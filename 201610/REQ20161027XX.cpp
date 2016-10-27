#include <iostream>

using namespace std;
class clock
{
public:
    void setting();
    void date();
    void time();
private:
    int year,month,day,hour,minute,second;
};
void clock::setting()
{
    cin>>year>>month>>day>>hour>>minute>>second;
}
void clock::date()
{
    cout<<year<<" "<<month<<" "<<day<<endl;
}
void clock::time()
{
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}
int main()
{


    clock test;
    test.setting();
    test.date();
    test.time();
    return 0;
}
