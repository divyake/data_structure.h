#include<stdio.h>
void sel(int a[],int n);
void display(int a[],int n);
void main()
{
int a[100];
int n,i;

printf("Enter the number of element in array:\n");
scanf("%d",&n);
printf("Enter the value of array:\n");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
 sel(a,n);
 display(a,n);
}
void sel(int a[],int n)
{
 int pos,temp,i,j;
 for(i=0;i<n;i++)
 {
  pos=i;
   for(j=i+1;j<n;j++)
   {
     if(a[pos]>a[j])
     {
       pos=j;
     }
   }
   if(pos!=i)
   {
     temp=a[i];
     a[i]=a[pos];
     a[pos]=temp;
    }
  }
}
void display(int a[],int n)
{
  int i;
  printf("sorted array is:\n");
  for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
  }
}
