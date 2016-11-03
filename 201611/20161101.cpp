#include <iostream>

using namespace std;

int a[16];

int main()
{
    int* p=a+1;
    int* q=a+6;
    cout << q-p << endl;
    return 0;
}
