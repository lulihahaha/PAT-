#include <iostream>
using namespace std;

int main()
{
int a,b,d;
cin>>a>>b>>d;
int sum=a+b;
int ans[31],num=0;
do{//����ȡ�෨
    ans[num++]=sum%d;
    sum=sum/d;
}while(sum!=0);
for(int i=num-1;i>=0;i--)//�Ӹ�λ���
    cout<<ans[i];
    return 0;
}
