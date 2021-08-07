#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char x;
    char y;
    for(int i=n;i>=1;i--)
    {
        for(int k=1;k<i;k++)
        {
            cout<<" ";
        }
        for(int j=n-i+1;j>=1;j--)
        {
            x=64+j;
            cout<<x;
        }
        for(int l=1;l<(n-i+1);l++)
        {
            y=65+l;
            cout<<y;
        }
        cout<<endl;
    }
    return 0;
}
