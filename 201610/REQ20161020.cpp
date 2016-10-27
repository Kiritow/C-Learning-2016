#include "stdio.h"

 int main ()
{
    int n;
    int ppap(int n);
    for(;;)
    {
        scanf ("%d", &n);
        ppap(n);
        printf ("\n");
        if(getchar()=='\n')
            break;
    }
    return 0;
}

 int ppap(int n)
{
    int a[n][n], i, j;
    for (i=0; i<n; i++)
        for (j=0; j<=i; j++)
        {
            if (i==1||i==j||i==0||j==0)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    for (i=0; i<n; i++)
    {
            for (j=0; j<=i; j++)
        {
            if(j==0)
                printf("1");
            else
                printf (" %d", a[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
