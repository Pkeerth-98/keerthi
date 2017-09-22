#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[100],c[100];
int i;
cout<<"enter the string";
for(i=0;i<=100;i++)
cin>>a[i];
c=strrev(a);
cout<<"reversed string"<<c;
}
