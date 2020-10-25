#include <iostream>
using namespace std;

int main()
{
int a,b,d;
cin>>a>>b>>d;
int sum=a+b;
int ans[31],num=0;
do{//除基取余法
    ans[num++]=sum%d;
    sum=sum/d;
}while(sum!=0);
for(int i=num-1;i>=0;i--)//从高位输出
    cout<<ans[i];
    return 0;
}
