#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t,x,y,i;

    cin>>t;
    while(t--)
    {

        cin>>x>>y;
        int sum=0;
        if((x%2)==0)
        {
            for(i=(x+1); y!=0; i=(i+2))
            {
                sum=sum+i;
                y--;
            }
            cout<<sum<<endl;
        }
        else if((x%2)!=0)
        {
           for(i=x;y!=0;i=(i+2))
           {
               sum=sum+i;
               y--;
           }
           cout<<sum<<endl;

        }


    }
}
