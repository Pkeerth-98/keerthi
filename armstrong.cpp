#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,x,p=1,s=0;
cout<<"enter the number";
cin>>n;
x=n;
if(x!=0)
{
x=x/10;
for(i=0;i<3;i++)
{
p=p*x;
}
s=p+s;
}
if(s==n)
cout<<"the num is armstrong num";
else
cout<<"the numis not armstrong num ;"
}
