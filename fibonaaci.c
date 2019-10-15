#include<stdio.h>
int main()
{
 int sum=0,i,a;
 printf("Enter the number upto which you want to take result of fibonacci series : ");
 scanf("%d",&a);
 for(i=0;i<=a;i++)
   {
   	sum=sum+i;
   	printf("%d ",sum);
   	}
 return 0;
  } 	
