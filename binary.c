#include<stdio.h>
void binary(int a[],int m,int n);
void main()
{
int a[100];
int n,m,i;

printf("Enter the number of element in array:\n");
scanf("%d",&n);
printf("Enter the value of array:\n");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("Enter the value to be search:\n");
scanf("%d",&m);
binary(a,m,n);
}
	
void binary(int a[],int m,int n)
{
  int low,up,mid=0,i;
   low=0;
   up=n-1;
  while(low<=up)
  {
  
   mid=(low+up)/2;
   if(a[mid]==m)
    { 
      
      printf("value is present at: %d\n",mid+1);
      break;
    }
    else if(a[mid]<m)
    {
      low=mid+1;
    }
    else if(a[mid]>m)
    {
      up=mid-1;
    }
}
}  
     
