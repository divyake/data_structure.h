#include<stdio.h>
void lin(int a[],int n,int m);
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
lin(a,n,m);
}
void lin(int a[],int n,int m)
{
 int i,c=0;
 printf("\nposition are:");
 for(i=0;i<n;i++)
 {
   if(a[i]==m)
   {
   printf("%d\n",i);
     c=c+1;
     }
 }
 printf("%d is present  %d time\n",m,c);
}
     
    

