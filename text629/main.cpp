#include<iostream>
using namespace std;
int max (int x,int y);
int min (int x,int y);
int main()
{
#include<iostream>
    using namespace std;
    class PingFenSystem
    {
    public:
        int m;
        int n;
        PingFenSystem(int xuanshou,int pingwei)
        {
            n=xuanshou;
            m=pingwei;
        }
        void average(double pingwei[])
        {
            double temp=0;
            double sum=0;
            for(int i=0;i<m-1;i++)
            {
                for(int j=0;j<m-i-1;j++)
                {
                    if(pingwei[j]<pingwei[j+1])
                    {
                        temp=pingwei[j];
                        pingwei[j]=pingwei[j+1];
                        pingwei[j+1]=temp;
                    }
                }
            }
            for(i=1;i<m-1;i++)
            {
                sum+=pingwei[i];
            }
            sum/=m-2;
            cout<<"the result is "<<sum<<endl;
        }
    };
    void main()
    {
        int m;
        cout<<"请输入评委数:";
        cin>>m;
        cout<<endl;
        int n;
        cout<<"请输入选手数:";
        cin>>n;
        cout<<endl;
        double score[100];
        for(int i=0;i<100;i++)
            score[i]=0;
        PingFenSystem  pfs1(n,m);
        for(i=1;i<n+1;i++)
        {
            cout<<"选手 "<<i<<endl;
            cout<<"输入评委的分数："<<endl;
            for(int j=0;j<m;j++)
                cin>>score[j];
            pfs1.average(score);
        }
    }
    
}
{
    int a=0,b=101,c=0,i,j;
    double average;
    cout<<"请输入选手成绩"<<endl;
    for(i=1;i<=10;i++)
    {
        cout<<"第"<<i<<"位评委给分：";
        cin>>j;
        a=max(a,j);
        b=min(b,j);
        c=c+j;
    }
    average=(c-a-b)/8;
    cout<<"减去一个最高分"<<a<<","<<"减去一个最低分"<<b<<endl;
    cout<<"该选手的最后得分："<<average<<endl;
    return 0;
}

int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int min(int x, int y)
{
    if(x>y)
    {
        return y;
    }
    else
    {
        return x;
    }    
}
