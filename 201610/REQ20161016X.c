#include "stdio.h"

 int main ()
{
    int n;
    scanf ("%d", &n);
    int i;
    for (i=0; i<n; i++)
    {
        int a;
        scanf ("%d", &a);
        int j;
        if (a==1)
        {
            printf ("No\n");
        }
        else if (a>2)
        {
            for (j=2; j<a; j++)
            {
                if (a%j == 0)
            {
                printf ("No\n");
                break;
            }
            else if (a%j > 0)
            {
                printf ("Yes\n");
                break;
            }
            }
        }
        else if (a==2)
        {
            printf ("Yes\n");
        }
    }



    return 0;
}
