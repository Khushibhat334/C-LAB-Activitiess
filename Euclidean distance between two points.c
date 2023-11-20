#include<stdio.h>
#include<math.h>
void main()
{
Float a,b,c,d;
printf("Enter the points");
scanf("%f%f%f%f",&a,&b,&c,&d);
Float distance=sqrt(pow((c-a),2)+pow((d-b),2));
printf("Enter the distance= %f",distance);
}