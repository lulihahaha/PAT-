#include <iostream>
using namespace std;

int main()
{
    int col,row;
    char c;
    cin>>col>>c;
    if(col%2==0)
        row=col/2;
    else
        row=col/2+1;
    for(int i=1;i<=col;i++)
        cout<<c;//µÚÒ»ÐÐ
    cout<<endl;
    for(int i=2;i<=row-1;i++)
    {
        cout<<c;
        for(int j=2;j<=col-1;j++)
            cout<<" ";
        cout<<c<<endl;
    }
    for(int i=1;i<=col;i++)
        cout<<c;//last line
    return 0;
}
