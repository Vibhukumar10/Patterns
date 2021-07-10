#include<iostream>
using namespace std;
int main()
{
    int n;
    char x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            x=64+i;
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}



