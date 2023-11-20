#include<stdio.h>
void main()
{
int arr[]={25,11,7,75,56};
int length=size of (arr)/size of (arr[0]);
int max=arr[0];
for(int i=0;i<length;i++)
{
if(arr[i]>max)
max=arr[i];
}
printf("largest element present in given array:%d\n",max);
}