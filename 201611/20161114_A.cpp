#include <string>
#include <cpplib/cpplib#gsock>
#include <wartime/frame/NBox.h>
#include <vector>
#include <functional>
#include "gui.h"
using namespace std;

/// Light CUI(GUI) Box
class Choice
{
public:
    int id;
    string tag,info;
    /// CallFunc: Return 1 if stop loop , return 0 to continue
    function<int()> callfunc;
    Choice(int _id,string _tag,string _info,function<int()> _callfunc) : id(_id),tag(_tag),info(_info),
    callfunc(_callfunc) {}
};

class ChoiceList
{
public:
    void add(Choice c)
    {
        vec.push_back(c);
    }
    int call(int id)
    {
        return vec.at(id-1).callfunc();
    }
    void show()
    {
        int lsz=vec.size();
        for(int i=1;i<=lsz;i++)
        {
            TAG(cid,i);printf("%s\n",vec.at(i-1).tag.c_str());
        }
        resetcolor();printf("------------------\n");
        for(int i=1;i<=lsz;i++)
        {
            INFOPRINT(cid,i,"%s\n",vec.at(i-1).info.c_str());
        }
    }
    ChoiceList()
    {
        cid=1;
    }
    int getaction()
    {
        int lsz=vec.size();
        if(GetAction(cid,1,lsz))
        {
            return cid;
        }
        else
        {
            return 0;
        }
    }
protected:
    vector<Choice> vec;
    int cid;
};

class ScreenPad
{
public:
    void setList(ChoiceList& _ls)
    {
        ls=_ls;
    }
    ChoiceList& getList()
    {
        return ls;
    }
    void show()
    {
        while(1)
        {
            ClearScreen();
            TITLE("%s\n",title.c_str());
            if(ex_header) ex_header();
            ls.show();
            if(ex_footer) ex_footer();
            int ret=ls.getaction();
            if(ret>0)
            {
                /// ls.getaction() return >0: return-val is confirmed.
                ret=ls.call(ret);
                if(ret==1)
                {
                    /// ls.call() return 1: Stop Loop, back to upper menu.
                    return;
                }
                /// ls.call() return 0 : Continue Loop
            }
            /// ls.getaction() return 0 : No Action is confirmed.
        }
    }
    function<void()> ex_header;
    function<void()> ex_footer;
    string title;
protected:
    ChoiceList ls;

};

#define RETURN return 1
#define STAY return 0

void GDI_Sample()
{
    Choice a(1,"这是第一个选项","这是第一个选项的说明,确认后不会返回",[]{STAY;});
    Choice b(2,"这是第二个选项","这是第二个选项的说明,确认后就返回了.",[]{RETURN;});
    ChoiceList ls;
    ls.add(a);
    ls.add(b);
    ScreenPad pad;
    pad.title="这是标题";
    pad.ex_footer=[]{printf("这里是页脚\n");};
    pad.ex_header=[]{printf("这里是页眉\n");};
    pad.setList(ls);
    pad.show();
}

int main()
{
    GDI_Sample();
    return 0;
}
