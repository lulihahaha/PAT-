#include <iostream>
using namespace std;

long long  findD(long long a,long long da)
{//ͨ��ö��a��ÿһλ����da���Ƚϣ������λ��ȣ���
    //��pa=pa*10+da
    long long pa=0;
    while(a!=0)
    {
        if(a%10==da)
            pa=pa*10+da;
        a=a/10;
    }
    return pa;
}
int main()
{
    long long A,DA,B,DB,PA,PB;
    cin>>A>>DA>>B>>DB;
    PA=findD(A,DA);
    //cout<<PA<<endl;
    PB=findD(B,DB);
    //cout<<PB<<endl;
    cout<<PA+PB;
    return 0;
}
