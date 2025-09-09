#include<stdio.h>
int main(){
int i,n,k,high,low,mid,f=0;
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
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(arr[mid]==k)
{
printf("%d found at position %d\n",k,mid+1);
f=1;
}
else if(arr[mid]<k)
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(f==0);
{
printf("%d not found in the array %d\n",k,1+1);
}
return 0;
}
