#include <iostream>
using namespace std;

int change(char a)
{
    if(a=='B')
        return 0;
    if(a=='C')
        return 1;
    if(a=='J')
        return 2;

}

char Max(int a,int b,int c)
{
    if(a>=b&&a>=c)
        return 'B';
    if(b>a&&b>=c)
        return 'C';
    if(c>a&&c>b)
        return 'J';

}
int main()
{
    int N,jia_win=0,jia_faile=0,pin=0,yi_win=0,yi_faile=0;
    int jia_B_win=0,jia_C_win=0,jia_J_win=0;
    int yi_B_win=0,yi_C_win=0,yi_J_win=0;
    cin>>N;
    while(N--)
    {
        char jia,yi;
        cin>>jia>>yi;
        int k1,k2;
        k1=change(jia);
        k2=change(yi);
        if((k1+1)%3==k2)//jia win
        {
            jia_win++;
            yi_faile++;
            //temp_jia=rechange(k1);
            if(k1==0)
                jia_B_win++;
            if(k1==1)
                jia_C_win++;
            if(k1==2)
                jia_J_win++;
        }
        if(k1==k2)
        {
            pin++;
        }
        if((k2+1)%3==k1)//yi win
        {
            yi_win++;
            jia_faile++;
            //temp_yi=rechange(k2);
            if(k2==0)
                yi_B_win++;
            if(k2==1)
                yi_C_win++;
            if(k2==2)
                yi_J_win++;
        }
    }
    char jia_max_win,yi_max_win;
    jia_max_win=Max(jia_B_win,jia_C_win,jia_J_win);
    yi_max_win=Max(yi_B_win,yi_C_win,yi_J_win);
    cout<<jia_win<<" "<<pin<<" "<<jia_faile<<endl;
    cout<<yi_win<<" "<<pin<<" "<<yi_faile<<endl;
    cout<<jia_max_win<<" "<<yi_max_win;
    return 0;
}
