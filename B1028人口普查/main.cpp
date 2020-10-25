#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct person{
char name[10];
int y,m,d;
};

bool lessequ(person a,person b)//a<b less
{
    if(b.y!=a.y)
        return a.y<=b.y;
    else if(a.m!=b.m)
        return a.m<=b.m;
    else
        return a.d<=b.d;
}

bool moreequ(person a,person b)//a>b more
{
    if(a.y!=b.y)
        return a.y>=b.y;
    else if(a.m!=b.m)
        return a.m>=b.m;
    else
        return a.d>=b.d;
}
int main()
{
    person temp,oldest,youngest,left_p,right_p;
    int N,num=0;
    cin>>N;
    left_p.y=youngest.y=1814;
    left_p.m=youngest.m=9;
    left_p.d=youngest.d=6;
    right_p.y=oldest.y=2014;
    right_p.m=oldest.m=9;
    right_p.d=oldest.d=6;
    for(int i=0;i<N;i++)
    {
        scanf("%s %d/%d/%d",&temp.name,&temp.y,&temp.m,&temp.d);
        if(lessequ(temp,right_p)&&moreequ(temp,left_p))
            {num++;
        if(lessequ(temp,oldest))
            oldest=temp;
        if(moreequ(temp,youngest))
            youngest=temp;}
    }
    if(num==0)
        cout<<"0"<<endl;
    else
        cout<<num<<" "<<oldest.name<<" "<<youngest.name<<endl;
    return 0;
}
