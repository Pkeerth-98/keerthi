#include<iostream.h>
#include<conio.h>
void main()
{
int x;
cout<<"enter the year";
cin>>x;
if(x%4==0)
 {
 if(x%100==0)
    if(x%400==0)
    cout<<"leap year";
 }
 else
 cout<<"not leap year";
}
