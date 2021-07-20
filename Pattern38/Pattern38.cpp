#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char x;
    for(int i=1;i<=n;i++)
    {
        for(int k=n;k>i;k--)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            x=64+(2*i-1);
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}


