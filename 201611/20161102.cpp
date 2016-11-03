#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdarg.h>

#include <windows.h>
#include <winsock2.h>
#include "gui.h"
int _global_flag_is_first_use=1;
void WelcomePage()
{
    if(_global_flag_is_first_use==0) return;
    ClearScreen();
    TITLE("欢迎使用 班主任管家软件\n");
    printf("感谢您使用HC TECH 班主任管家软件.\n"
           "当前版本: v1.3x 核心版本: V20161024x\n"
           "\n"
           ">>>功能简介\n"
           "班主任管家软件以学生信息、课程信息为基础，以品行表现成绩（辅导员、班主任、班级评议成绩）和业务课程成绩为评价依据，每学期评定一次奖学金，奖学金作为学生评定各种荣誉的主要依据，并将各种评价结果计入奖惩信息库。根据业务成绩进行各种统计分析。\n"
           ">>>操作方法\n"
           "本软件采用HC TECH Easy Control System. 使用上下左右方向键移动选项,回车键进行确认.\n"
           ">>>技术支持\n"
           "HC TECH提供软件技术支持, 截止时间:2016/12/31 \n"
           "HC Cloud Service提供在线技术支持*, 截止时间:2016/12/15 \n"
           "  *注:此处在线技术支持仅限本软件的云平台功能支持.\n"
           "在技术支持时间内,若遇到任何问题,请发邮件到1362050620@qq.com联系开发者.\n"
           "\n"
           "更新日志\n"
           "V1.2x 核心版本: V20161024x\n"
           "  使用新核心,加快数据检索速度.\n"
           "V1.1x 核心版本: V20160928x\n"
           "  优化启动速度,修复云平台操作的bug.\n"
           "V1.0x 核心版本: V20160928x\n"
           "  班主任管家软件发布.\n");
    printf("---------------------\n按任意键继续\n");
    GetUserInputKey();
}

int main()
{
    WelcomePage();
    return 0;
}
