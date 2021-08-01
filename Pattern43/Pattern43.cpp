#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int k=1;k<i;k++)
        {
            cout<<" ";
        }
        for(int j=n-i+1;j>=1;j--)
        {
            cout<<j-1;
        }
        for(int l=1;l<(n-i+1);l++)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}
