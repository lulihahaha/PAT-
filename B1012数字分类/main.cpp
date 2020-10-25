#include <iostream>
#include <math.h>
#include<iomanip>
#include<cstdio>
using namespace std;
int a1[1010],a2[1010],a3[1010],a4[1010],a5[1010];

int main()
{
    int N;
    cin>>N;
    int num[1010];
    int ca1=0,ca2=0,ca3=0,ca4=0,ca5=0;
    for(int i=0;i<N;i++)
        cin>>num[i];
    for(int i=0;i<N;i++)//·ÖÀà
    {
        if(num[i]%5==0&&num[i]%2==0)
        {
            a1[ca1]=num[i];
            ca1++;
        }
        if(num[i]%5==1)
        {
            a2[ca2]=num[i];
            ca2++;
        }
        if(num[i]%5==2)
        {
            a3[ca3]=num[i];
            ca3++;
        }
        if(num[i]%5==3)
        {
            a4[ca4]=num[i];
            ca4++;
        }
        if(num[i]%5==4)
        {
            a5[ca5]=num[i];
            ca5++;
        }
    }
    int asum=0;
    for(int i=0;i<ca1;i++)
    {
        asum=asum+a1[i];
    }
    int bsum=0;
    for(int i=0;i<ca2;i++)
    {
        bsum=bsum+pow(-1,i)*a2[i];
    }
    int csum=0;
    for(int i=0;i<ca4;i++)
    {
        csum=csum+a4[i];
    }
    //float cmean;
    //cmean=csum/ca4;
    int dmax=0;
    for(int i=0;i<ca5;i++)
    {
        if(a5[i]>dmax)
            dmax=a5[i];
    }
    if(ca1==0)
        cout<<"N ";
    else
        cout<<asum<<" ";
    if(ca2==0)
        cout<<"N ";
    else
        cout<<bsum<<" ";
    if(ca3==0)
        cout<<"N ";
    else
        cout<<ca3<<" ";
    if(ca4==0)
        cout<<"N ";
    else
        //cout<<setiosflags(ios::fixed)<<setprecision(1)<<cmean<<" ";
        printf("%.1f ",(double)csum/ca4);
    if(ca5==0)
        cout<<"N";
    else
        cout<<dmax;
    return 0;
}
