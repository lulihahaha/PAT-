#include <iostream>
using namespace std;
struct student{
long long id;
int exam_seat;
};
int main()
{
    student test_seat[1010];
    int N,M;
    int find_num[1010];
    cin>>N;
    while(N--)
    {
        long long ids;
        int test,exam;
        cin>>ids>>test>>exam;
        test_seat[test].id=ids;
        test_seat[test].exam_seat=exam;
    }
    cin>>M;
for(int i=0;i<M;i++)
{
    cin>>find_num[i];
}
    for(int i=0;i<M;i++)
    {
        cout<<test_seat[find_num[i]].id<<" "<<test_seat[find_num[i]].exam_seat<<endl;
    }
    return 0;
}
