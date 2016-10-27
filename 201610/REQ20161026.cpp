# include <iostream>
using namespace std;
class clock{
    public:
        clock(int y,int mon,int da,int hnow,int mnow,int snow)
        {
            year = y;
            month= mon;
            day = da;
            h = hnow;
            m = mnow;
            s = snow;
        }
        void showtime()
        {
            cout<<year<<" "<<month<<" "<<day<<endl;
            cout<<h<<":"<<m<<":"<<s<<endl;
        }
    private:
        int year;
        int month;
        int day;
        int h;
        int m;
        int s;

};//类后括号要加分号！！！！！勿忘
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    clock n(a,b,c,d,e,f);
    n.showtime();
    return 0;
}
