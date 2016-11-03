#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    node *next;
};
int main()
{
    node *ah=0,*c,*n;
    int ala;
    cin>>ala;
    for(int a=0;a<ala;a++)
    {
        n=(node*)malloc(sizeof(node));
        if(ah==0)
        {
            ah=n;
        }
        else
        {
            c=ah;
            while(c->next!=0)
            {
                c=c->next;
            }
            c->next=n;
        }
        c=n;
        int alc;
        cin>>alc;
        c->data=alc;
    }
    return 0;
}
