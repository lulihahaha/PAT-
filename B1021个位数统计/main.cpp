#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[1010];
    gets(str);
    int count[10];
    for(int i=0;i<10;i++)
        count[i]=0;
    int len=strlen(str);
    //cout<<len;
    for(int i=0;i<len;i++)
    {
        count[str[i]-'0']++;
        //cout<<count[str[i]-'c'];
    }
        //count[str[i]-'c']++;
    for(int i=0;i<10;i++)
    {
        if(count[i]!=0)
            printf("%d:%d\n",i,count[i]);
    }
    return 0;
}
