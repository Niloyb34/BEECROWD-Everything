#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int m=N/60;//2335 minutes
    int seconds=N%60;//53s
    int hours=m/60;//38 hour
    int minutes=(m%60);//55 minutes
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;

}
