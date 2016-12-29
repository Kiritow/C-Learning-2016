#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

struct node
{
    int ltag,rtag;
    node* lp;
    node* rp;
    char val;

    node()
    {
        ltag=rtag=0;
        lp=rp=NULL;
    }
};

node _root;
node* root=&_root;

node _nroot;
node* nroot=&_nroot;

void buildtree(node* p)
{
    char val;
    scanf("%c",&val);
    p->val=val;
    if(val=='#') return;

    p->lp=new node;
    p->rp=new node;
    buildtree(p->lp);
    buildtree(p->rp);

    if(p->lp->val=='#')
    {
        delete p->lp;
        p->lp=NULL;
    }

    if(p->rp->val=='#')
    {
        delete p->rp;
        p->rp=NULL;
    }
}

node* pre=NULL;
void InThreading(node* p)
{
    if(p)
    {
        InThreading(p->lp);

        if(!p->lp)
        {
            p->ltag=1;
            p->lp=pre;
        }

        if(pre&&!pre->rp)
        {
            pre->rtag=1;
            pre->rp=p;
        }

        pre=p;

        InThreading(p->rp);
    }
}

void trival(node* t)
{
    node* p=t->lp;
    while(p!=t)
    {
        while(p->ltag==0)
        {
            p=p->lp;
        }
        printf("%c ",p->val);
        while(p->rtag==1 && p->rp!=t)
        {
            p=p->rp;
            printf("%c ",p->val);
        }

        p=p->rp;
    }
}

int main()
{
    buildtree(root);
    nroot->rp=nroot;
    nroot->rtag=0;

    pre=nroot;
    nroot->lp=root;
    nroot->ltag=0;

    InThreading(root);

    pre->rp=nroot;
    pre->rtag=1;

    nroot->rp=pre;

    trival(nroot);
}

/// ABDH##I##EJ###CF##G##
