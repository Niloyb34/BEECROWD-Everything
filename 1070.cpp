#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(true)
    {
        if((n%2)!=0)
        {
            cout<<n<<endl;
            count++;

        }
        n++;
        if(count==6)
        {
            break;
        }
    }

}
