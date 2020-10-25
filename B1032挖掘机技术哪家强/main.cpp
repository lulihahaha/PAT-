#include <iostream>
using namespace std;

int main()
{
int N,school[100010],smax=0,k=1;
cin>>N;
for(int i=1;i<=N;i++)
    school[i]=0;
int n,score;

for(int i=0;i<N;i++)
{
    cin>>n>>score;
    school[n]+=score;
}
for(int i=1;i<=N;i++)
{
    //cout<<i<<" "<<school[i]<<endl;
    if(school[i]>smax)
    {
        smax=school[i];
        k=i;
    }
}
cout<<k<<" "<<smax<<endl;
    return 0;
}
