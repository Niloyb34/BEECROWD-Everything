#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
 int n,j,i,count;
 cin>>n;
while(n>0)
{
cin>>i;
/*if(i==2)
{
    cout<<i<<" eh primo"<<endl;

}*/
if(i==0||i==1)
{
cout<<i<<" "<<" nao eh primo"<<endl;//not prime
}
else
{
for(j=2;j<i;j++)
{
if((i%j)==0)
{
count++;
}
}
if(count==0)
{
cout<<i<<" eh primo"<<endl;
}
else
{
cout<<i<<" nao eh primo"<<endl;
}
count=0;
}
n--;

}
}
