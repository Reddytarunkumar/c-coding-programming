#include<stdio.h>
int main()
{
int i,n,sum=0,temp=0;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
i=n%10;
{
if(i%2==0)
{
sum=sum+1;
}
else
{
temp=temp+1;
}
n=n/10;
}
}
if(sum==temp)
{
printf("fancy number");
}
else
{
printf("not a fancy number");
}
}


    