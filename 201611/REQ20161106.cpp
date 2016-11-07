/** Code For Requests Has No CopyRight. */
#include "stdio.h"
#include <stdlib.h>
#include <string.h>
#include"windows.h"
#define N 10000
int studentnum;
struct student                                           //学生信息结构体
{
    char ch;
    char stu_num[20];
    char stu_name[20];
    char stu_room[20];
    char stu_sex[20];
    int stu_gra[50];
    int moral;
    int age;
    char course[100][100];
    int other[100];
}sa[N];
struct stu_
{
    int stu_gra;
    char course[100][100];
    char stu_name[20];
    int fall;
    int unfall;
}ss[N];
struct course                                             //课程信息结构体
{
    char coursenumber[50];
    char coursecategory[50];
    int coursesemester;
    char coursename[50];
    int credit;
    int grade[100];
}ca[N];
void import_()
{
    printf("********************************\n");              //菜单1.1
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*           导入部分           *\n");
    printf("********************************\n");
    printf("**请输入需要录入信息的学生数量**\n");
    printf("********************************\n");
    printf("               ");
    scanf("%d",&studentnum);
    printf("\n");
    system("cls");
    import(studentnum);
}
void import(int studentnum)                             /** OK**/
{
    int z;
    printf("********************************\n");              //菜单1.1
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*           导入部分           *\n");
    printf("********************************\n");
    printf("********************************\n");
    printf("*1.学生信息录入                *\n");
    printf("*2.课程信息录入                *\n");
    printf("*3.品行表现成绩录入            *\n");
    printf("*4.课程成绩录入                *\n");
    printf("*5.奖惩信息录入                *\n");
    printf("*0.返回上层界面                *\n");
    printf("********************************\n");
    printf("*********请选择相应操作*********\n");
    printf("                                \n");
    printf("                                \n");
    printf("                                \n");
    printf("                 made in china  \n");
    scanf("%d",&z);
    system("cls");
    switch(z)
    {
        case 1:stu_infor_import(studentnum);break;
        case 2:cou_infor_import(studentnum);break;
        case 3:mor_infor_import(studentnum);break;
        case 4:gra_infor_import(studentnum);break;
        case 5:oth_infor_import(studentnum);break;
        case 0:mainnume();break;
    }
}
void stu_infor_import(int studentnum)                   /** OK**/
{
    int i;
    int one;
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         学生信息录入         *\n");
    printf("********************************\n");
    printf("*********请输入学生信息*********\n");
    for(i=0;i<studentnum;i++)                         //录入
    {
        scanf("%s %s %s %s %d",sa[i].stu_num,sa[i].stu_name,sa[i].stu_room,sa[i].stu_sex,&sa[i].age);
    }
    system("cls");
    printf("***********录入结果为***********\n");
    for(i=0;i<studentnum;i++)
    {
        printf("%s %s %s %s %d\n",sa[i].stu_num,sa[i].stu_name,sa[i].stu_room,sa[i].stu_sex,sa[i].age);
    }
    printf("************录入成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&one);
    system("cls");
    if(one==1)
    {
        exit(0);
    }
    if(one==0)
    {
        import(studentnum);
    }

}
void cou_infor_import(int studentnum)                   /** OK**/
{
    int coursenum;
    int i;
    int two;
    system("cls");
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         课程信息录入         *\n");
    printf("********************************\n");
    printf("**请输入您需录入信息的课程个数**\n");
    scanf("%d",&coursenum);
    printf("*********请输入课程信息*********\n");
    getchar();
    for(i=0;i<coursenum;i++)                          //录入
    {
        scanf("%s %s %d %s %d",ca[i].coursenumber,ca[i].coursecategory,&ca[i].coursesemester,ca[i].coursename,&ca[i].credit);
    }
    system("cls");
    printf("***********录入结果为***********\n");
    for(i=0;i<coursenum;i++)
    {
        printf("%s %s %d %s %d\n",ca[i].coursenumber,ca[i].coursecategory,ca[i].coursesemester,ca[i].coursename,ca[i].credit);
    }
    printf("************录入成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        import(studentnum);
    }
}
void mor_infor_import(int studentnum)                   /** OK**/
{
    int one;
    int i;
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*       品行表现成绩录入       *\n");
    printf("********************************\n");
    printf("*******请输入品行表现信息*******\n");
    getchar();
    for(i=0;i<studentnum;i++)
    {
        scanf("%d",&sa[i].moral);
    }
    system("cls");
    printf("***********录入结果为***********\n");
    for(i=0;i<studentnum;i++)
    {
        printf("%d\n",sa[i].moral);
    }
    printf("************录入成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&one);
    system("cls");
    if(one==1)
    {
        exit(0);
    }
    if(one==0)
    {
        import(studentnum);
    }
}
void gra_infor_import(int studentnum)                   /** OK**/
{

    int coursenum;
    int i;
    int m;
    int two;
    int z;
    system("cls");
    int l;
    char CourseName[100];
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         成绩信息录入         *\n");
    printf("********************************\n");
    printf("**请输入您需录入课程成绩的个数**\n");
    scanf("%d",&coursenum);
    getchar();
    for(i=0;i<coursenum;i++)
    {
        printf("*********请输入课程名称*********\n");
        scanf("%s",sa[i].course[i]);
        for(z=0;z<100;z++)
        {
            for(l=0;l<100;l++)
            {
                sa[z].course[i][l]=sa[i].course[i][l];
            }
        }
        printf("********请输入第%d科成绩********\n",i+1);
        for(m=0;m<studentnum;m++)
        {
            printf("%s %s %s ",sa[m].stu_num,sa[m].stu_name,sa[m].course[i]);
            scanf("%d",&sa[m].stu_gra[i]);
        }
    }
    system("cls");
    printf("************录入成功************\n");
    for(i=0;i<coursenum;i++)
    {
        for(m=0;m<studentnum;m++)
        printf("%s %s %s %d\n",sa[m].stu_num,sa[m].stu_name,sa[m].course[i],sa[m].stu_gra[i]);
    }
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        import(studentnum);
    }
}
void oth_infor_import(int studentnum)                   /** OK**/
{
    int num;
    int i,j;
    int two;
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         奖惩信息录入         *\n");
    printf("********************************\n");
    printf("*********请输入奖惩信息*********\n");
    for(i=0;i<studentnum;i++)
    {
        printf("请输入第%d名学生需录入奖惩信息个数",i+1);
        scanf("%d",&num);
        printf("%s %s ",sa[i].stu_num,sa[i].stu_name);
        for(j=0;j<num;j++)
        {
            scanf("%d",&sa[i].other[j]);
        }
    }
    for(i=0;i<studentnum;i++)
    {
        printf("%s %s ",sa[i].stu_num,sa[i].stu_name);
        for(j=0;j<num;j++)
        {
            printf("%d ",sa[i].other[j]);
        }
        printf("\n");
    }
    printf("************录入成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        import(studentnum);
    }
}
void revise()                                           /** OK**/
{
    int z;
    printf("********************************\n");
    printf("*       Welcome to here        *\n");
    printf("********************************\n");
    printf("*           修改部分           *\n");
    printf("********************************\n");
    printf("*1.对录入的课程成绩进行修改    *\n");
    printf("*2.对个人信息进行修改          *\n");
    printf("*3.对课程信息进行修改          *\n");
    printf("*4.能对学生奖惩信息进行修改    *\n");
    printf("*0.返回上层界面                *\n");
    printf("*********请选择相应操作*********\n");
    printf("                                \n");
    printf("                                \n");
    printf("                                \n");
    printf("                 made in china  \n");
    scanf("%d",&z);
    system("cls");
    switch(z)
    {
        case 1:gra_infor_revise();break;
        case 2:stu_infor_revise();break;
        case 3:cou_infor_revise();break;
        case 4:oth_infor_revise();break;
        case 0:mainnume();break;
    }
}
void gra_infor_revise()                                 /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         学生成绩修改         *\n");
    printf("********************************\n");
    printf("         请输入学生编号         \n");
    int new_stu_gra;
    char stu_number[50];
    int two;
    int i;
    int z;
    scanf("%s",stu_number);
    for(i=0;strcmp(sa[i].stu_num,stu_number)!=0;i++)
    {

    }
    z=i;
    printf("请输入需要更改成绩的课程名称:");
    char u[100];
    scanf("%s",u);
    int t=0;
    int m=0;
    for(m=0;strcmp(u,sa[0].course[m])!=0;m++)
    {

    }
    printf("           原学生成绩:");
    printf("%d",sa[i].stu_gra[m]);
    printf("\n     请输入修改后的学生成绩     \n");
    scanf("%d",&new_stu_gra);
    sa[i].stu_gra[m]=new_stu_gra;
    system("cls");
    printf("\n************修改成功************\n");
    printf("%s %s %d\n",sa[i].stu_name,sa[i].course[i],sa[i].stu_gra[m]);
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        revise();
    }
}
void stu_infor_revise()                                 /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         学生信息修改         *\n");
    printf("********************************\n");
    printf("****请选择需要修改信息的类型****\n");
    printf("*1.学生编号                    *\n");
    printf("*2.学生姓名                    *\n");
    printf("*3.学生宿舍                    *\n");
    printf("*4.学生性别                    *\n");
    printf("*5.学生年龄                    *\n");
    int m;
    scanf("%d",&m);
    system("cls");
    printf("请输入已录入的学生数量：");
    int mmm;
    scanf("%d",&mmm);
    switch(m)
    {
        case 1:stu_numeber_infor_revise(mmm);break;
        case 2:stu_name_infor_revise(mmm);break;
        case 3:stu_room_infor_revise(mmm);break;
        case 4:stu_sex_infor_revise(mmm);break;
        case 5:stu_age_infor_revise(mmm);break;
    }
}
void stu_numeber_infor_revise(int mmm)                  /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         学生编号修改         *\n");
    printf("********************************\n");
    printf("        请输入原学生编号        \n");
    char new_stu_number[50];
    char stu_number[50];
    int two;
    scanf("%s",stu_number);
    printf("     请输入修改后的学生编号     \n");
    scanf("%s",new_stu_number);
    int i;
    int z;
    for(i=0;strcmp(sa[i].stu_num,stu_number)!=0;i++)
    {

    }
    z=i;
    strcpy(sa[z].stu_num,new_stu_number);
    system("cls");
    printf("%s",sa[z].stu_num);
    printf("\n************修改成功************\n");
    int u;
    for(u=0;u<mmm;u++)
    {
        printf("%s %s %s %s %d\n",sa[u].stu_num,sa[u].stu_name,sa[u].stu_room,sa[u].stu_sex,sa[u].age);
    }
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        stu_infor_revise();
    }
}
void stu_name_infor_revise(int mmm)                     /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         学生姓名修改         *\n");
    printf("********************************\n");
    printf("         请输入学生编号         \n");
    char new_stu_name[50];
    char stu_number[50];
    int two;
    scanf("%s",stu_number);
    printf("     请输入修改后的学生姓名     \n");
    scanf("%s",new_stu_name);
    int i;
    int z;
    for(i=0;sa[i].stu_num==stu_number;i++)
    {

    }
    z=i;
    strcpy(sa[z].stu_name,new_stu_name);
    system("cls");
    printf("%s",sa[z].stu_name);
    printf("\n************修改成功************\n");
    int u;
    for(u=0;u<mmm;u++)
    {
        printf("%s %s %s %s %d\n",sa[u].stu_num,sa[u].stu_name,sa[u].stu_room,sa[u].stu_sex,sa[u].age);
    }
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        stu_infor_revise();
    }
}
void stu_room_infor_revise(int mmm)                     /** Waiting for change**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         学生宿舍修改         *\n");
    printf("********************************\n");
    printf("         请输入学生编号         \n");
    char new_stu_room[50];
    char stu_number[50];
    int two;
    scanf("%s",stu_number);
    printf("     请输入修改后的学生宿舍     \n");
    scanf("%s",new_stu_room);
    int i;
    int z;
    for(i=0;sa[i].stu_num==stu_number;i++)
    {

    }
    z=i;
    for(i=0;i<50;i++)
    {
        sa[z].stu_room[i]=new_stu_room[i];
    }
    system("cls");
    printf("%s",sa[z].stu_room);
    printf("\n************修改成功************\n");
    int u;
    for(u=0;u<mmm;u++)
    {
        printf("%s %s %s %s %d\n",sa[u].stu_num,sa[u].stu_name,sa[u].stu_room,sa[u].stu_sex,sa[u].age);
    }
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        stu_infor_revise();
    }
}
void stu_sex_infor_revise(int mmm)                     /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         学生性别修改         *\n");
    printf("********************************\n");
    printf("         请输入学生编号         \n");
    char new_stu_sex[50];
    char stu_number[50];
    int two;
    scanf("%s",stu_number);
    printf("     请输入修改后的学生性别     \n");
    scanf("%s",new_stu_sex);
    int i;
    int z;
    for(i=0;sa[i].stu_num==stu_number;i++)
    {

    }
    z=i;
    for(i=0;i<50;i++)
    {
        sa[z].stu_sex[i]=new_stu_sex[i];
    }
    system("cls");
    printf("%s",sa[z].stu_sex);
    printf("\n************修改成功************\n");
    int u;
    for(u=0;u<mmm;u++)
    {
        printf("%s %s %s %s %d\n",sa[u].stu_num,sa[u].stu_name,sa[u].stu_room,sa[u].stu_sex,sa[u].age);
    }
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        stu_infor_revise();
    }
}
void stu_age_infor_revise(int mmm)                     /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         学生年龄修改         *\n");
    printf("********************************\n");
    printf("         请输入学生编号         \n");
    int new_stu_age;
    char stu_number[50];
    int two;
    scanf("%s",stu_number);
    printf("     请输入修改后的学生年龄     \n");
    scanf("%d",&new_stu_age);
    int i;
    int z;
    for(i=0;sa[i].stu_num==stu_number;i++)
    {

    }
    z=i;
    sa[z].age=new_stu_age;
    system("cls");
    printf("%d",sa[z].age);
    printf("\n************修改成功************\n");
    int u;
    for(u=0;u<mmm;u++)
    {
        printf("%s %s %s %s %d\n",sa[u].stu_num,sa[u].stu_name,sa[u].stu_room,sa[u].stu_sex,sa[u].age);
    }
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        stu_infor_revise();
    }
}
void cou_infor_revise()                                /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         课程信息修改         *\n");
    printf("********************************\n");
    printf("****请选择需要修改信息的类型****\n");
    printf("*1.课程编号                    *\n");
    printf("*2.课程种类                    *\n");
    printf("*3.课程所属学期                *\n");
    printf("*4.课程名称                    *\n");
    printf("*5.课程学分                    *\n");
    int m;
    scanf("%d",&m);
    system("cls");
    switch(m)
    {
        case 1:cou_numeber_infor_revise();break;
        case 2:cou_category_infor_revise();break;
        case 3:cou_semester_infor_revise();break;
        case 4:cou_name_infor_revise();break;
        case 5:cou_credit_infor_revise();break;
    }
}
void cou_numeber_infor_revise()                        /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         课程编号修改         *\n");
    printf("********************************\n");
    printf("        请输入原课程编号        \n");
    char new_cou_number[50];
    char cou_number[50];
    int two;
    scanf("%s",cou_number);
    printf("     请输入修改后的课程编号:\n");
    scanf("%s",new_cou_number);
    int i;
    int z;
    for(i=0;strcmp(ca[i].coursenumber,cou_number)!=0;i++)
    {

    }
    z=i;
    strcpy(ca[z].coursenumber,new_cou_number);
    system("cls");
    printf("%s %s %d %s %d",ca[i].coursenumber,ca[i].coursecategory,ca[i].coursesemester,ca[i].coursename,ca[i].credit);
    printf("\n************修改成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        cou_infor_revise();
    }
}
void cou_category_infor_revise()                       /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         课程性质修改         *\n");
    printf("********************************\n");
    printf("         请输入课程编号         \n");
    char new_cou_category[50];
    char cou_number[50];
    int two;
    int i;
    int z;
    scanf("%s",cou_number);
    for(i=0;strcmp(ca[i].coursenumber,cou_number)!=0;i++)
    {

    }
    z=i;
    printf("           原课程性质\n");
    printf(":%s\n",ca[z].coursecategory);
    printf("     请输入修改后的课程性质     \n");
    scanf("%s",new_cou_category);
    strcpy(ca[z].coursecategory,new_cou_category);
    system("cls");
    printf("%s %s %d %s %d",ca[i].coursenumber,ca[i].coursecategory,ca[i].coursesemester,ca[i].coursename,ca[i].credit);
    printf("\n************修改成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        cou_infor_revise();
    }
}
void cou_semester_infor_revise()                       /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         课程学期修改         *\n");
    printf("********************************\n");
    printf("         请输入课程编号         \n");
    int new_cou_semester;
    char cou_number[50];
    int two;
    int i;
    int z;
    scanf("%s",cou_number);
    for(i=0;strcmp(ca[i].coursenumber,cou_number)!=0;i++)
    {

    }
    z=i;
    printf("           原课程学期:");
    printf("%d\n",ca[z].coursesemester);
    printf("     请输入修改后的课程学期     \n");
    scanf("%d",&new_cou_semester);
    ca[z].coursesemester=new_cou_semester;
    system("cls");
    printf("%s %s %d %s %d",ca[i].coursenumber,ca[i].coursecategory,ca[i].coursesemester,ca[i].coursename,ca[i].credit);
    printf("\n************修改成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        cou_infor_revise();
    }
}
void cou_name_infor_revise()                           /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         课程名称修改         *\n");
    printf("********************************\n");
    printf("         请输入课程编号         \n");
    char new_cou_name[50];
    char cou_number[50];
    int two;
    int i;
    int z;
    scanf("%s",cou_number);
    for(i=0;strcmp(ca[i].coursenumber,cou_number)!=0;i++)
    {

    }
    z=i;
    printf("           原课程名称:");
    printf("%s\n",ca[z].coursename);
    printf("     请输入修改后的课程名称     \n");
    scanf("%s",new_cou_name);
    strcpy(ca[z].coursename,new_cou_name);
    system("cls");
    printf("%s %s %d %s %d",ca[i].coursenumber,ca[i].coursecategory,ca[i].coursesemester,ca[i].coursename,ca[i].credit);
    printf("\n************修改成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        cou_infor_revise();
    }
}
void cou_credit_infor_revise()                         /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*         课程学期修改         *\n");
    printf("********************************\n");
    printf("         请输入课程编号         \n");
    int new_cou_credit;
    char cou_number[50];
    int two;
    int i;
    int z;
    scanf("%s",cou_number);
    for(i=0;strcmp(ca[i].coursenumber,cou_number);i++)
    {

    }
    z=i;
    printf("           原课程学分:");
    printf("%d\n",ca[z].credit);
    printf("     请输入修改后的课程学分     \n");
    scanf("%d",&new_cou_credit);
    ca[z].credit=new_cou_credit;
    system("cls");
    printf("%s %s %d %s %d",ca[i].coursenumber,ca[i].coursecategory,ca[i].coursesemester,ca[i].coursename,ca[i].credit);
    printf("\n************修改成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        cou_infor_revise();
    }
}
void oth_infor_revise()                                /** OK**/
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*       学生奖惩信息修改       *\n");
    printf("********************************\n");
    printf("         请输入学生编号         \n");
    int new_stu_oth;
    char stu_number[50];
    int two;
    int i;
    int z;
    int m;
    scanf("%s",stu_number);
    for(i=0;strcmp(sa[i].stu_num,stu_number)!=0;i++)
    {

    }
    z=i;
    printf("      请输入原奖惩信息序号      \n");
    scanf("%d",&m);
    printf("         原学生奖惩信息");
    printf(":%d\n",sa[i].other[m-1]);
    printf("   请输入修改后的学生奖惩信息   \n");
    scanf("%d",&new_stu_oth);
    sa[i].other[m-1]=new_stu_oth;
    system("cls");
    int y;
    printf("%s %s         ",sa[i].stu_num,sa[i].stu_name);
    for(y=0;sa[i].other[y]!=0;y++)
    {
        printf("%d ",sa[i].other[y]);
    }
    printf("\n************修改成功************\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        revise();
    }
}
void statisticsandanalysis()                           /** OK**/
{
    int z;
    printf("************************************************************\n");
    printf("*                      Welcome to here                     *\n");
    printf("************************************************************\n");
    printf("*                       统计分析部分                       *\n");
    printf("************************************************************\n");
    printf("*1.对某门功课各分数段成绩进行统计                          *\n");
    printf("*2.统计任意一名同学每门功课的班级排名以及业务课成绩总体排名*\n");
    printf("*0.返回上层界面                                            *\n");
    printf("***********************请选择相应操作***********************\n");
    printf("                                                            \n");
    printf("                                                            \n");
    printf("                                                            \n");
    printf("                                               made in china\n");
    scanf("%d",&z);
    system("cls");
    printf("请输入已录入的学生数量：");
    int mmm;
    scanf("%d",&mmm);
    switch(z)
    {
        case 1:statisticsandanalysis1(mmm);break;
        case 2:statisticsandanalysis2(mmm);break;
        case 0:mainnume();break;
    }
}
void statisticsandanalysis1(int mmm)
{
    int A=0,B=0,C=0,D=0,E=0;
    printf("************************************************************\n");
    printf("*                      Welcome to here                     *\n");
    printf("************************************************************\n");
    printf("*                       统计分析部分                       *\n");
    printf("************************************************************\n");
    printf("*             对某门功课各分数段成绩进行统计               *\n");
    printf("************************************************************\n");
    printf("                       请输入课程名称                       \n");
    char coursename[100];
    scanf("%s",coursename);
    int i;
    int two;
    for(i=0;strcmp(coursename,sa[0].course[i])!=0;i++)
    {

    }
    int m;
    for(m=0;m<mmm;m++)
    {
        if((sa[m].stu_gra[i])>=90&&(sa[m].stu_gra[i])<=100)
        {
            A++;
        }
        if((sa[m].stu_gra[i])>=80&&(sa[m].stu_gra[i])<90)
        {
            B++;
        }
        if((sa[m].stu_gra[i])>=70&&(sa[m].stu_gra[i])<80)
        {
            C++;
        }
        if((sa[m].stu_gra[i])>=60&&(sa[m].stu_gra[i])<70)
        {
            D++;
        }
        if((sa[m].stu_gra[i])>=0&&(sa[m].stu_gra[i])<60)
        {
            E++;
        }

    }
    printf("90-100分段共有%d人次",A);
    printf("80-90分段共有%d人次",B);
    printf("70-80分段共有%d人次",C);
    printf("60-70分段共有%d人次",D);
    printf("0-60分段共有%d人次",E);
    printf("*请选择接下来的操作            *\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        revise();
    }
}
void statisticsandanalysis2(int mmm)
{
    printf("************************************************************\n");
    printf("*                      Welcome to here                     *\n");
    printf("************************************************************\n");
    printf("*                       统计分析部分                       *\n");
    printf("************************************************************\n");
    printf("* 统计任意一名同学某门功课的班级排名以及业务课成绩总体排名 *\n");
    printf("************************************************************\n");
    printf("                       请输入学生编号                       \n");
    char studentnumber[100];
    scanf("%s",studentnumber);
    int u;
    for(u=0;sa[u].stu_num==studentnumber;u++)
    {

    }
    printf("                       请输入课程名称                       \n");
    char coursename[100];
    scanf("%s",coursename);
    int i;
    int two;
    int num=1;
    for(i=0;coursename==sa[0].course[i];i++)
    {

    }
    int y;
    for(y=0;y<=50;y++)
    {
        if(sa[y].stu_gra[i]>sa[u].stu_gra[i])
        {
            num++;
        }
    }
    int total=0;
    int o,h;
    int sum=0;
    int k=0;
    int b;
    for(b=0;b<50;b++)
    {
        sum+=sa[u].stu_gra[b];
    }
    for(h=0;h<50;h++)
    {
        total=0;
        for(o=0;o<50;i++)
        {
            total+=sa[y].stu_gra[i];
        }
        if(total>sum)
        {
               k++;
        }
    }
    printf("该学生的该门课程班级排名为%d",num);
    printf("该学生的所有课程班级排名为%d",k);
    printf("\n**********统计分析成功**********\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        revise();
    }
}
void order()                                          /** OK**/
{
    int z;
    printf("**************************************************************************\n");
    printf("*                            Welcome to here                             *\n");
    printf("**************************************************************************\n");
    printf("*                                排序部分                                *\n");
    printf("**************************************************************************\n");
    printf("*1.按业务课程成绩对学生由高到低排序                                      *\n");
    printf("*2.按不及格门次对学生由高到低排序，并显示不及格门次                      *\n");
    printf("*3.能根据奖励对学生进行由高到低排序并输出信息                            *\n");
    printf("*4.能根据惩罚情况对学生由低到高排序并输出信息                            *\n");
    printf("*0.返回上层界面                                                          *\n");
    printf("******************************请选择相应操作******************************\n");
    printf("                                                                          \n");
    printf("                                                                          \n");
    printf("                                                                          \n");
    printf("                                                           made in china  \n");
    scanf("%d",&z);
    system("cls");
    switch(z)
    {
        case 1:ordering_1();break;
        case 2:ordering_2();break;
        case 3:ordering_3();break;
        case 4:ordering_4();break;
        case 0:mainnume();break;
    }
}
void ordering_1()                                     /** OK**/
{
    int mmm;
    printf("**************************************************************************\n");
    printf("*                            Welcome to here                             *\n");
    printf("**************************************************************************\n");
    printf("*                                排序部分                                *\n");
    printf("**************************************************************************\n");
    printf("*                 分学期按业务课程成绩对学生由高到低排序                 *\n");
    printf("                           请输入录入学生数量：");
    scanf("%d",&mmm);
    printf("**************************************************************************\n");
    printf("                             请输入课程名称:");
    char coursename[100];
    scanf("%s",coursename);
    int i;
    int two;
    for(i=0;strcmp(coursename,sa[0].course[i])!=0;i++)
    {

    }
    int p1,p2,p3,p4,p5,p6;
    for(p1=0;p1<100;p1++)
    {
        ss[p1].stu_gra=sa[p1].stu_gra[i];
    }
    for(p3=0;p3<100;p3++)
    {
        for(p4=0;p4<50;p4++)
        {
            strcpy(ss[p3].course[p4],sa[p3].course[p4]);
        }
    }
    for(p5=0;p5<100;p5++)
    {
        strcpy(ss[p5].stu_name,sa[p5].stu_name);
    }
    int h=0;
    int t;
    char K[100];
    int p,q;
    for(p=0;p<49;p++)
    {
        for(q=0;q<49-p;q++)
        {
            if (ss[q].stu_gra<ss[q+1].stu_gra)
            {
                t=ss[q].stu_gra;
                ss[q].stu_gra=ss[q+1].stu_gra;
                ss[q+1].stu_gra=t;
                strcpy(K,ss[q].stu_name);
                strcpy(ss[q].stu_name,ss[q+1].stu_name);
                strcpy(ss[q+1].stu_name[h],K);
            }
        }
    }
    int r;
    int g=0;
    for(r=0;r<mmm;r++)
    {
        g+=1;
        printf("%s %s %d %d\n",ss[r].stu_name,coursename,ss[r].stu_gra,g);
    }
    printf("*请选择接下来的操作            *\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        order();
    }
}
void ordering_2()                                     /** OK**/
{
    printf("**************************************************************************\n");
    printf("*                            Welcome to here                             *\n");
    printf("**************************************************************************\n");
    printf("*                                排序部分                                *\n");
    printf("**************************************************************************\n");
    printf("*            按不及格门次对学生由高到低排序，并显示不及格门次            *\n");
    printf("**************************************************************************\n");
    printf("                           请输入录入学生数量：");
    int mmm;
    scanf("%d",&mmm);
    int fall[50];
    int i;
    for(i=0;i<50;i++)
    {
        fall[i]=0;
    }
    int j;
    int y;
    for(j=0;j<50;j++)
    {
        for(y=0;y<50;y++)
        {
            if(sa[j].stu_gra[y]<60&&sa[j].stu_gra[y]>0)
            {
                fall[j]++;
            }
        }
    }
    int h=0;
    char K[100];
    int p,q;
    int t;
    int p5;
    for(p5=0;p5<mmm;p5++)
    {
        strcpy(ss[p5].stu_name,sa[p5].stu_name);
    }
    for(p5=0;p5<mmm;p5++)
    {
        ss[p5].fall=fall[p5];
    }
    for(p=0;p<49;p++)
    {
        for(q=0;q<49-p;q++)
        {
            if (ss[q].fall<ss[q+1].fall)
            {
                t=ss[q].fall;
                ss[q].fall=ss[q+1].fall;
                ss[q+1].fall=t;
                strcpy(K,ss[q].stu_name);
                strcpy(ss[q].stu_name,ss[q+1].stu_name);
                strcpy(ss[q+1].stu_name,K);
            }
        }
    }

    int lk;
    for(lk=0;lk<mmm;lk++)
    {
        printf("%s 挂科数量为%d\n",ss[lk].stu_name,ss[lk].fall);
    }
    printf("*请选择接下来的操作            *\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    int two;
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        order();
    }

}
void ordering_3()
{
    printf("**************************************************************************\n");
    printf("*                            Welcome to here                             *\n");
    printf("**************************************************************************\n");
    printf("*                                排序部分                                *\n");
    printf("**************************************************************************\n");
    printf("*                根据奖励对学生进行由高到低排序并输出信息                *\n");
    printf("**************************************************************************\n");
    printf("                           请输入录入学生数量：");
    int mmm;
    scanf("%d",&mmm);
    int a[50];
    int i;
    int j;
    char name[100][100];
    for(i=0;i<mmm;i++)
    {
        a[i]=0;
    }
    for(i=0;i<mmm;i++)
    {
        for(j=0;j<100;j++)
        {
            if(sa[i].other[j]>0)
            {
                a[i]++;
            }
        }
    }
    int o;
    for(o=0;o<mmm;o++)
    {
        ss[o].unfall=a[o];
    }
    int p5;
    for(p5=0;p5<mmm;p5++)
    {
        strcpy(ss[p5].stu_name,sa[p5].stu_name);
    }
    int p,q;
    int t;
    int h=0;
    char K[100];
    for(p=0;p<49;p++)
    {
        for(q=0;q<49-p;q++)
        {
            if (ss[q].unfall<ss[q+1].unfall)
            {
                t=ss[q].unfall;
                ss[q].unfall=ss[q+1].unfall;
                ss[q+1].unfall=t;
                strcpy(K,ss[q].stu_name);
                strcpy(ss[q].stu_name,ss[q+1].stu_name);
                strcpy(ss[q+1].stu_name[h],K);
            }
        }
    }
    int u;
    for(u=0;u<mmm;u++)
    {
        printf("%s奖励次数为%d\n",ss[u].stu_name,ss[u].unfall);
    }
    printf("*请选择接下来的操作            *\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    int two;
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        order();
    }
}
void ordering_4()
{
    printf("**************************************************************************\n");
    printf("*                            Welcome to here                             *\n");
    printf("**************************************************************************\n");
    printf("*                                排序部分                                *\n");
    printf("**************************************************************************\n");
    printf("*                根据惩罚情况对学生由低到高排序并输出信息                *\n");
    printf("**************************************************************************\n");
    int a[50];
    int i;
    int j;
    char name[100][100];
    for(i=0;i<50;i++)
    {
        a[i]=0;
        for(j=0;j<100;j++)
        {
            if(sa[i].other[j]>0)
            {
                a[i]++;
            }
        }
    }
    int p,q;
    int t;
    int h=0;
    char K[100];
    for(p=0;p<49;p++)
    {
        for(q=0;q<49-p;q++)
        {
            if (a[q]>a[q+1])
            {
                t=a[q];
                a[q]=a[q+1];
                a[q+1]=t;
                strcpy(K,name[q]);
                strcpy(name[q],name[q+1]);
                strcpy(name[q+1],K);
            }
        }
    }
    int u;
    for(u=0;u<100;u++)
    {
        printf("%s惩罚次数为%d",name[u],a[u]);
    }
    printf("*请选择接下来的操作            *\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    int two;
    scanf("%d",&two);
    system("cls");
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        order();
    }
}
void scholarship()
{
    printf("********************************\n");
    printf("        Welcome to here         \n");
    printf("********************************\n");
    printf("*        奖学金自动测评        *\n");
    printf("********************************\n");
    printf("该功能尚未开发，敬请期待！！！！\n");
    printf("*1.退出程序                    *\n");
    printf("*0.返回上层界面                *\n");
    int two;
    scanf("%d",&two);
    if(two==1)
    {
        exit(0);
    }
    if(two==0)
    {
        mainnume();
    }
}
void mainnume()
{
    system("cls");
    FILE *fp1,*fp2;                                          //文件指针
    int z;
    int i;

    int coursenum;
    int m;
    int one;
    if((fp1=fopen("studentinformation.txt","wb+"))==NULL)       //以读/写的方式打开文件studentinformation.txt
    {
        printf("Cannot open file!");
        exit(0);
    }
    if((fp2=fopen("courseinformation.txt","wb+"))==NULL)      //以读/写的方式打开文件courseinformation.txt
    {
        printf("Cannot open file!");
        exit(0);
    }
    while(1)
    {
        printf("********************************\n");              //主菜单
        printf("*       Welcome to here        *\n");
        printf("********************************\n");
        printf("*     班 主 任 管 家 系 统     *\n");
        printf("********************************\n");
        printf("*1.导入部分                    *\n");
        printf("*2.修改部分                    *\n");
        printf("*3.统计分析部分                *\n");
        printf("*4.排序部分                    *\n");
        printf("*5.奖学金自动测评              *\n");
        printf("*0.关闭程序                    *\n");
        printf("*********请选择相应操作*********\n");
        printf("                                \n");
        printf("                                \n");
        printf("                                \n");
        printf("                 made in china  \n");
        scanf("%d",&m);
        system("cls");
        switch(m)
        {
            case 1:import_();break;
            case 2:revise();break;
            case 3:statisticsandanalysis();break;
            case 4:order();break;
            case 5:scholarship();break;
        }
    }

}
void password()
{
    char password[15];
    int m=1;
    printf("**********************************************************\n\n");
    printf("                      请输入八位密码                      \n\n");
    printf("                         ");
    gets(password);
    while ((strcmp(password, "88888888") != 0)&&(m<5))
    {
        system("cls");
        printf("                         密码错误！                        \n\n");
        printf("                      您还有%d次机会\n",5-m);
        m+=1;
        printf("**********************************************************\n\n");
        printf("                      请再次输入密码:");
        gets(password);
        printf("**********************************************************\n\n");
    }
    if (strcmp(password,"88888888")==0)
    {
        mainnume();
        system("cls");
    }
    else
	{
	    printf("                      您的机会已用完！！\n\n");
	    exit(0);
	}
}
main()
{
    password();
    return 0;
}
