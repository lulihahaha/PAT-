#include <iostream>
using namespace std;

int panduan(long long a,long long  b,long long  c)
{
    if(a+b>c)
        return 1;
    else
        return 0;
}
int main()
{
    int T,tcase=1;
    //long long A[20],B[20],C[20];
    cin>>T;
    while(1)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        //A[tcase]=a;
        //B[tcase]=b;
        //C[tcase]=c;
        if(panduan(a,b,c)==1)
             cout<<"Case #"<<tcase<<": true"<<endl;
        else
            cout<<"Case #"<<tcase<<": false"<<endl;
         tcase++;
         if(tcase>T)
            break;
         //cout<<tcase;
    }
/*
    for(int i=1;i<=T;i++)
    {
        if(panduan(A[i],B[i],C[i])==1)
             cout<<"Case #"<<i<<": true"<<endl;
        else
            cout<<"Case #"<<i<<": false"<<endl;
    }*/
    return 0;
}
