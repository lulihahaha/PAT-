#include <iostream>
using namespace std;

int main()
{
    int xishu[100],zhishu[10000],xishu_[100],zhishu_[10000];
    int flag=0,i=0,count=0;
    while(1)
    {
        cin>>xishu[i];
        cin>>zhishu[xishu[i]];
        if(zhishu[xishu[i]]==0)
        {
            flag=1;
        }
        i++;
        if(flag==1)
            break;
    }
        if(zhishu[xishu[0]]==0)
        {
            cout<<"0 0";//0次项求导为0
        }
        if(xishu[0]==0)
        {
            cout<<"0 0";//0次项求导为0
        }
    for(int j=0;j<i;j++)
    {
        xishu_[j]=xishu[j]*zhishu[xishu[j]];
        zhishu_[xishu[j]]=zhishu[xishu[j]]-1;
        if(xishu_[j]!=0)
            count++;
    }
 if(count==0)
    cout<<"0 0";
    else
    {
           for(int j=0;j<i;j++)
    {
    if(xishu_[j]!=0)
    {
         cout<<xishu_[j]<<" "<<zhishu_[xishu[j]];
        count--;
        if(count!=0)
            cout<<" ";

    }
    }
    }

    return 0;
}
