#include"stdio.h"
#include"stdlib.h"
int jishu=0;
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;
void creatlist_L(LNode *l,int n)
{
    int i;
    LNode *p,*q;
    q=l;
    for(i=1; i<n; i++)
    {
        p=(LNode*)malloc(sizeof(LNode));
        scanf("%d",&q->data);
        q->next=p;
        q=q->next;
        p->next=NULL;


    }
    scanf("%d",&q->data);
}
void shuchu_L(LNode *l)
{
    int i;
    if(jishu==0)
    {
        printf("NULL");
        return;
    }
    LNode *p;
    p=l;
    while(p!=0)
    {
        printf("%d",p->data);
        p=p->next;
        i++;
        if(p)
        {
            printf(" ");
        }
    }
    printf("\n");
    printf("%d",i);
}
void jiaoji(LNode *l1,LNode *l2,LNode *l3)
{
    LNode *p,*q;
    q=l3;
    while(l1&&l2)
    {
        if(l1->data==l2->data)
        {
            l1=l1->next;
            l2=l2->next;
        }
        else if(l1->data>l2->data)
        {
            l2=l2->next;
        }
        else if(l1->data<l2->data)
        {
            l3->data=l1->data;
            if(l3->next==NULL)
            {
                l3->next=(LNode*)malloc(sizeof(LNode));
                l3->next->next=NULL;
            }
            l3=l3->next;
            jishu++;
        }
    }
    q->next=NULL;
    free(l3);
}
int main()
{
    LNode *L1,*L2,*L3;
    int n1,n2;
    L1=(LNode*)malloc(sizeof(LNode));
    scanf("%d",&n1);
    creatlist_L(L1,n1);
    L2=(LNode*)malloc(sizeof(LNode));
    scanf("%d",&n2);
    creatlist_L(L2,n2);
    L3=(LNode*)malloc(sizeof(LNode));
    L3->next=NULL;
    jiaoji(L1,L2,L3);
    shuchu_L(L3);

    return 0;

}
