#include <iostream>
#include <thread>
using namespace std;

void proc()
{
    cout<<"In Thread "<<endl;
    this_thread::sleep_for(chrono::seconds(200));
    cout<<"Fin "<<endl;
}
int main()
{
    cout<<"Main Started."<<endl;
    thread td(proc);
    cout<<"Thread Started."<<endl;
    pthread_t ntv=td.native_handle();
    cout<<"Native Handle Got"<<endl;
    pthread_cancel(ntv);
    cout<<"Canceled."<<endl;
    td.detach();
    cout<<"Detached."<<endl;
    cout<<"Waiting ..."<<endl;
    this_thread::sleep_for(chrono::seconds(5));
    cout<<"Done In Main"<<endl;
    return 0;
}
