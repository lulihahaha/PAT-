#include <iostream>
using namespace std;

int main()
{
    int N,M,a[120],blank=1;
    cin>>N>>M;
    M=M%N;//修正M，确保M小于N；
    for(int i=0;i<N;i++)
        cin>>a[i];
    for(int i=N-M;i<=N-1;i++)
    {
         cout<<a[i];
         if(blank<N)
            cout<<" ";
         blank++;
    }
    for(int i=0;i<=N-M-1;i++)
    {
        cout<<a[i];
        if(blank<N)
            cout<<" ";
         blank++;
    }
    return 0;
}
