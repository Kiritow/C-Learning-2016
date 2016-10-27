#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

const int STU = 30000;
const int Quantity = 20;
struct Class
    {
        int ClassNum;
        double Credit6;
        double Grade6;
        char ClassName[40];
        char ClassTyp[4];
        char Retake[2];
    };
    struct info
    {
        int Num;//Number % 10000 / 100 = ClassNumber
        char Name[8];
        char Dorm[4];
        char Sex[2];
        int Age;
        int Term;
        struct Class LIST[Quantity];
    }SIN[STU];//这里还要定义一个数组的
int main()
{
    int a;

    for(int b=0;b<STU;b++)
    {
        printf("1.信息录入 2.信息修改 3.信息统计 4.信息排序 5.退出\n");
        scanf("%d",&a);
        getchar();
        if(a==5)
        {
            b--;
            break;
        }
        switch(a)
        {
            case 1:
            {
                //1.学生信息 2.课程信息 3.品行表现 4.奖惩信息
                for(;b<STU;b++)
                {
                    printf("学生信息:\n");
                    printf("学号: ");
                    scanf("%d",&SIN[b].Num);
                    getchar();
                    printf("姓名: ");
                    gets(SIN[b].Name);
                    //还有其他信息需要录入，偷懒没写
                    printf("1.继续录入 2.返回上一级\n");
                    scanf("%d",&a);
                    getchar();
                    if(a==2)
                    {
                        break;
                    }//录入应该一个人一次录完其全部信息，防止出错
                }
            }break;
        }
        b--;
        continue;
    }
    return 0;
}
