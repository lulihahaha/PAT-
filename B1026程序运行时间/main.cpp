#include <iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
//int CLK_TCK=100;
int main()
{
    int C2,C1,a;
    cin>>C1>>C2;
    a=C2-C1;
    if(a%100>=50)
    {//�����ӽ�����������������Ա��⸴�ӵĸ���������
        a=a/100+1;
    }
    else
        a=a/100;
    //cout<<fixed<<setprecision(2)<<a/3600<<":"<<a%3600/60<<":"<<a%60;
    printf("%02d:%02d:%02d\n",a/3600,a%3600/60,a%60);
    //Ϊʲô��printf��������ȫ��ͨ�����⣬����cout���У�������
    return 0;
}
