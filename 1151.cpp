#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int f[100];
    cin>>n;
    f[0]=0;
    f[1]=1;
    for(i=2;i<n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[0]<<" ";
    cout<<f[1];
    for(i=2;i<n;i++)
    {
        cout<<" "<<f[i];
    }
    cout<<'\n';



}
