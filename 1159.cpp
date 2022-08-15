#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,y,x,sum,i;

    while(x!=0)
    {
        cin>>x;
        sum=0;
        y=1;

        if(x==0)
        {
            break;
        }
        if((x%2)==0)
        {
            for(i=x; y<6; i=(i+2))
            {
                sum=sum+i;
                y++;
            }
            cout<<sum<<endl;
        }
        else if((x%2)!=0)
        {
            for(i=(x+1);y<6;i=(i+2))
            {
                sum=sum+i;
                y++;
            }
            cout<<sum<<endl;
        }


    }

}
