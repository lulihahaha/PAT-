#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,x,e;
    char c;
    cin>>n>>c;
    x=int(sqrt(2*(1+n)))-1;
    if(x%2==0)
        x=x-1;
    else
        x=x;//the bottom line owning char
    e=n-((1+x)*((1+x)/2))+1;//save the no print char
    for(int i=x;i>=1;i=i-2)
    {
        for(int m=1;m<=(x-i)/2;m++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<c;
        cout<<endl;
    }//shang ban bu fen
    for(int i=3;i<=x;i=i+2)
    {
        for(int m=1;m<=(x-i)/2;m++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<c;
        cout<<endl;
    }//xia ban bu fen
    cout<<e;
    return 0;
}
