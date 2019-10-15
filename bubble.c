#include<stdio.h>
void bubble(int a[],int n);
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
bubble(a,n);
display(a,n);
}
void bubble(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
      }
    }
  }
}
void display(int a[],int n)
{
  int i;
  printf("Sorted array is:\n");
  for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
  }
}

