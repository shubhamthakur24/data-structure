#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=((2*n-1)-2*i);j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<'\n';
    }
    for(int i=n-1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j;
        }
        for(int j=n-1;j>=1;j--)
        {
            cout<<j;
        }
    }
    return 0;
}