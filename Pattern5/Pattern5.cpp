#include<iostream>
using namespace std;
int main()
{
    int n;
    char x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            x=64+j;
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}
