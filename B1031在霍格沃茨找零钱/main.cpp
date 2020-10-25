#include <iostream>
#include<cstdio>
using namespace std;
const int galloeon=17*29;
const int sickle=29;
int main()
{
    int a1,a2,a3,b1,b2,b3;
    scanf("%d.%d.%d %d.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
    int p,a;
    p=a1*galloeon+a2*sickle+a3;
    a=b1*galloeon+b2*sickle+b3;
    int change=a-p;
    if(change<0)
    {
        cout<<"-";
        change=-change;
    }
    printf("%d.%d.%d\n",change/galloeon,change%galloeon/sickle,change%sickle);
    return 0;
}
