#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int a,b,i;
  cin>>a>>b;
  if(a<b)
  {
  for(i=(a+1);i<b;i++)
  {
       if(((i%5)==3)||((i%5)==2))//rest mane hlo vagsesh
        cout<<i<<endl;
  }
  }
  else if(a>b)
  {
     for(i=(b+1);i<a;i++)
  {
       if(((i%5)==3)||((i%5)==2))//rest mane hlo vagsesh
        cout<<i<<endl;
  }
  }

}
