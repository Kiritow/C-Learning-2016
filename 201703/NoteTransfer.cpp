#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string getMelody(int note)
{
    switch(note)
    {
    case -10+6:
        return "NOTE_FS4";
    case -10+7:
        return "NOTE_GS4";
    case 0:
        return "0";
    case 1:
        return "NOTE_A4";
    case 2:
        return "NOTE_B4";
    case 3:
        return "NOTE_CS5";
    case 4:
        return "NOTE_D5";
    case 5:
        return "NOTE_E5";
    case 6:
        return "NOTE_FS5";
    case 7:
        return "NOTE_GS5";
    case 10+1:
        return "NOTE_A5";
    case 10+2:
        return "NOTE_B5";
    case 10+3:
        return "NOTE_CS6";
    case 10+4:
        return "NOTE_D6";
    case 10+5:
        return "NOTE_E6";
    case 10+6:
        return "NOTE_FS6";
    case 10+7:
        return "NOTE_GS6";
    default:
        return "#ERR#";
    }
}

int main()
{
    cout << "Program Begin"<<endl;

    cout<<"Note NoteFlag DurLines"<<endl;

    vector<string> notevec;
    vector<int> durvec;

    int note;
    while(cin>>note)
    {
        int pp;
        cin>>pp;

        string realnote=getMelody(note+pp*10);

        if(realnote=="#ERR#")
        {
            for(auto& str:notevec)
            {
                cout<<str<<",";
            }
            cout<<endl;

            system("pause");
        }

        int dur;
        cin>>dur;

        notevec.push_back(realnote);
        durvec.push_back(pow(2,dur+2));
    }

    cout<<notevec.size()<<endl<<durvec.size()<<endl;

    ofstream ofs("1.txt");
    for(auto& str:notevec)
    {
        ofs<<str<<",";
    }
    ofs<<endl;
    for(auto& idur:durvec)
    {
        ofs<<idur<<",";
    }
    ofs<<endl;
    return 0;
}
