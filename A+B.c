/** A+B 是最基本的问题.
*   对于标准文件应该使用
*   #include <stdio.h>
*   而不是#include "stdio.h"
*   main函数返回类型一定要为int.
*/
#include <stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    printf("%d\n",A+B);
    return 0;
}
