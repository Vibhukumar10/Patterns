#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char x;
    for(int i=n;i>=1;i--)
    {
        for(int k=n;k>i;k--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            x=64+j;
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}

