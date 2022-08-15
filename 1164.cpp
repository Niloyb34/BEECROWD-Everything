#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;
        for(i=1;i<n;i++)
        {
            if((n%i)==0)
            {
                sum=sum+i;
            }

        }
        if(sum==n)
            cout<<n<<" eh perfeito"<<endl;
        else
            cout<<n<<" nao eh perfeito"<<endl;
    }
}
