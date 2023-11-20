#include<stdio.h>
void main()
{
int number,i;
unsigned long long factorial=1;
printf("Enter a positive integer");
scanf("&d",&number);
if(number<0)
{
printf("Error factorial is not defined for negative numbers");
}
else
{
for(i=1;i<=number;i++)
{
factorial*=i;
}
printf("factorial of %d=%llu\n",number,factorial);
}
}
