#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char x;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            x=64+j;
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}

