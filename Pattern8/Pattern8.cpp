#include<iostream>
using namespace std;
int main()
{
    int n;
    char x;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            x=64+i;
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}
