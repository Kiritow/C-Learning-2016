#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
FILE *fp1,*fp2,*fp3;
using namespace std;
int TrainNum;
class traininformation
{
public:
    traininformation(){}
    string train_type[100];
    string train_number[100];
    void GetTrainType()
    {
        cout<<"��ӭ�����г���Ϣ¼�빦��"<<endl;
        cout<<"����������¼����г����"<<endl;
        cout<<"           ";
        cin>>TrainNum;
        ofstream ofs("Trainnumer.txt");
        ofs<<TrainNum;
        system("cls");
        int i;
        cout<<"                     �г�����"<<"       �г����"<<endl;
        for(i=0;i<TrainNum;i++)
        {
            cout<<"�������"<<i+1<<"��г�����Ϣ";
            cin>>train_type[i]>>train_number[i];
        }
        system("cls");
        cout<<"�г�����"<<"      �г���"<<endl;
        for(i=0;i<TrainNum;i++)
        {
            cout<<"   "<<train_type[i]<<"           "<<train_number[i]<<endl;
        }
        cout<<endl;
    }
};
class timeinformation:public traininformation
{
public:
    timeinformation(){}
    int train_time[2][100];
    void GetTime()
    {
        int i;
        for(i=0;i<TrainNum;i++)
        {
            cout<<"�г��� �г����� �г���վʱ��"<<endl;
            for(i=0;i<TrainNum;i++)
            {
                cout<<"  "<<train_number[i]<<"  "<<" "<<"    "<<train_type[i]<<"      ";
                cin>>train_time[0][i];
                cin>>train_time[1][i];
            }
            system("cls");
            cout<<"�г��� �г�����   �г���վʱ��"<<endl;
            ofstream ofs("Train_timetable.txt");
            ofs<<"�г�����  "<<"�г����  "<<"��վʱ��"<<endl;
            for(i=0;i<TrainNum;i++)
            {
                fp2=fopen("test.txt","at+");
                fprintf(fp2,"%s %s %d %d\n",train_type[i].c_str(),train_number[i].c_str(),train_time[0][i],train_time[1][i]);
                fclose(fp2);
                if(train_time[0][i]<10&&train_time[1][i]>=10)
                {
                    fp1=fopen("Train_timetable.txt","at+");
                    fprintf(fp1,"   %s       %s        0%d:%d\n",train_type[i].c_str(),train_number[i].c_str(),train_time[0][i],train_time[1][i]);
                    fclose(fp1);
                    cout<<"  "<<train_number[i]<<"  "<<"   "<<train_type[i]<<"          0"<<train_time[0][i]<<":"<<train_time[1][i]<<endl;
                }
                else if(train_time[0][i]<10&&train_time[1][i]<10)
                {
                    fp1=fopen("Train_timetable.txt","at+");
                    fprintf(fp1,"   %s       %s        0%d:0%d\n",train_type[i].c_str(),train_number[i].c_str(),train_time[0][i],train_time[1][i]);
                    fclose(fp1);
                    cout<<"  "<<train_number[i]<<"  "<<"   "<<train_type[i]<<"          0"<<train_time[0][i]<<":0"<<train_time[1][i]<<endl;
                }
                else if(train_time[0][i]>=10&&train_time[1][i]<10)
                {
                    fp1=fopen("Train_timetable.txt","at+");
                    fprintf(fp1,"   %s       %s        %d:0%d\n",train_type[i].c_str(),train_number[i].c_str(),train_time[0][i],train_time[1][i]);
                    fclose(fp1);
                    cout<<"  "<<train_number[i]<<"  "<<"   "<<train_type[i]<<"          "<<train_time[0][i]<<":0"<<train_time[1][i]<<endl;
                }
                else if(train_time[0][i]>=10&&train_time[1][i]>=10)
                {
                    fp1=fopen("Train_timetable.txt","at+");
                    fprintf(fp1,"   %s       %s        %d:%d\n",train_type[i].c_str(),train_number[i].c_str(),train_time[0][i],train_time[1][i]);
                    fclose(fp1);
                    cout<<"  "<<train_number[i]<<"  "<<"   "<<train_type[i]<<"          "<<train_time[0][i]<<":"<<train_time[1][i]<<endl;
                }
            }
        }
    }
};
class revise:public timeinformation
{
public:
    void revisetrainnumber()
    {
        string num;
        cou
