#include <iostream>
#include <cstring>
using namespace std;

struct student{
string name;
string id;
int score;
};
int main()
{
    int N;
    student s[1010];
    student smax,smin;
    smax.score=-1;
    smin.score=101;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        string a,b;
        int c;
        cin>>a>>b>>c;
        s[i].id=b;
        s[i].name=a;
        s[i].score=c;
    }
   // for(int i=0;i<N;i++)
       // cout<<s[i].name<<" "<<s[i].id<<endl;
    for(int i=0;i<N;i++)
    {
        if(s[i].score>smax.score)
        {
            smax.score=s[i].score;
            smax.id=s[i].id;
            smax.name=s[i].name;
        }

        if(s[i].score<smin.score)
        {
            smin.score=s[i].score;
            smin.id=s[i].id;
            smin.name=s[i].name;
        }

    }
    cout<<smax.name<<" "<<smax.id<<endl;
    cout<<smin.name<<" "<<smin.id<<endl;
    return 0;
}
