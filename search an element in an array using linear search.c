#include<stdio.h>
int linear search(int arr[],int n,int key)
{
for(int i=0;i<n;i++)
{
if(arr[i]==key)
{
return i;
}
}
return-1;
}
int main()
{
int n,key;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements :\n",n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the element to search:");
scanf("%d",&key);
int(result!=-1)
{
printf("Element %d found at index %d.\n",key,result);
{
else
{
printf("Element %d not found in the array\n",key);
}
return 0;
}


