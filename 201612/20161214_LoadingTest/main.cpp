#include "config.h"
#include "InitManager.h"
#include "ResourceManager.h"

char namebuff[1024];

const char* getname(int id)
{
    sprintf(namebuff,"loading_anim_%02d.png",id);
    return namebuff;
}
int winw=1024;
int winh=768;
int main()
{
    wnd=SDL_CreateWindow("Title",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,winw,winh,SDL_WINDOW_SHOWN);
    printf("CreateWindow: %s\n",SDL_GetError());
    rnd=SDL_CreateRenderer(wnd,-1,SDL_RENDERER_ACCELERATED);
    for(int i=1;i<=12;i++)
    {
        resmanager.LoadPicture(getname(i));
    }
    while(1)
        for(int i=1;i<=12;i++)
    {
        SDL_RenderClear(rnd);
        SDL_Rect rect;
        rect.x=winw/2-96/2;
        rect.y=winh/2-96/2;
        rect.w=96;
        rect.h=96;
        SDL_RenderCopy(rnd,resmanager.GetPicture(i-1),NULL,&rect);
        SDL_RenderPresent(rnd);
        SDL_PollEvent(NULL);
        SDL_Delay(1000/12);
    }
    return 0;
}
