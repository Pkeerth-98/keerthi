#include<iostream.h>
#include<conio.h>
void main()
{
int a[n],i,t;
cout<<"enter the no.of array";
cin>>n;
cout<<"enter the numbers";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
t=a[i];
a[i]=a[n-i];
a[n-i]=t;;
}
cout<<"reversed num";
for(i=0;i<n;i++)
cout<<a[i];
}
