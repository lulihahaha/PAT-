#include <iostream>
using namespace std;

int main()
{
    int T,afaile=0,bfaile=0;
    cin>>T;
    while(T--)
    {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        if(a1+b1==a2&&a1+b1!=b2)
            bfaile++;
        if (a1+b1==b2&&a1+b1!=a2)
            afaile++;
    }
    cout<<afaile<<" "<<bfaile;
    return 0;
}
