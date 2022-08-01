#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int s,e;

    cin>>s>>e;

    if(s<e)
    {
       cout<<"O JOGO DUROU "<<(e-s)<<" HORA(S)"<<endl;
    }
    else if(s==e)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else if(s>e)
    {
        cout<<"O JOGO DUROU "<<(24-s+e)<<" HORA(S)"<<endl;
    }





}
