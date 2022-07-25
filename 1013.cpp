//#include<bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    //MaiorAB mane A and B er modde jeta bro seta
    int a,b,c;
    cin>>a>>b>>c;
    int AB=(a+b+abs(a-b))/2;
    int max=(AB+c+abs(AB-c))/2;
    cout<<max<<" eh o maior"<<endl;


}
