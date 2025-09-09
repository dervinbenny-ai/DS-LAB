#include<stdio.h>
int main(){
int i,n,k,f=0;
printf("enter the size of the array:\n");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the element to search :\n");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(arr[i]==k)
{
printf("element %d found at position %d\n",k,i+1);
f=1;
}
}
if(f==0)
{
printf("%d not found at the array\n",k);
}
return 0;
}
