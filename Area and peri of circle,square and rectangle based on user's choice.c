#include<stdio.h>
void main()
{
float area1,peri1,area2,peri2,area3,peri3;
int ch;
printf("1.ciecle\n 2.square\n 3.rectangle\n Enter your choice");
scanf("%d",&ch);
float r,s,l,b;
switch(ch)
{
case 1:
printf("enter the radius");
scanf("%f",&r);
area1=3.14*r*r;
peri1=2*3.14*r;
printf("area of circle=%f\n",area1);
printf("peri of circle=%f\n",peri1);
break;
case 2:
printf("enter the side");
scanf("%f",&s);
area2=s*s;
peri2=4*s;
printf("area of square=%f\n",area2);
printf("peri of square=%f\n",peri2);
break;
case 3:
printf("enter the length and breadth");
scanf("%f%f",&l,&b); 
area3=l*b;
peri3=2*(l+b);
printf("area of rectangle=%f\n",area3);
printf("peri of rectangle=%f\n",peri3);
break;
default:
printf("zero");
}
}