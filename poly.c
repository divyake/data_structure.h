#include<stdio.h>
#include<stdlib.h>
void multiply();
 void sort();
 void sum();
 
 
struct node
{
 int cof;
 int exp;
 struct node *next;
 };
 
struct node * create(int );
void display(struct node *);


 struct node *head1,*head2,*head3;
 
 
void main()
{
   int size1,size2;
   
   printf("enter thew size of poly1\n");
   scanf("%d",&size1);
   head1 = create(size1);
    printf("polynomials are: \n");
   display(head1);
   printf("\nenter thew size of poly2\n");
   scanf("%d",&size2);
   head2 = create(size2);
    printf("polynomials are: \n");
   display(head2);
   printf("\nmultiplied polynomial is:\n");
   multiply();
   display(head3);
    sort();
    display(head3);
    sum();
    display(head3);
    
}
 

struct node * create(int size)
{
	struct node *new,*temp,*head=NULL;
	int i;
	printf("Enter the input:\n");
	for(i=0;i<size;i++)
	{
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d%d",&new->cof,&new->exp);
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			temp=head;
		}
		else
		{
			temp->next=new;
			temp=new;
		}
        }
        return head;
 }
  void display(struct node *new1)
 
{
printf("\n");
   struct node *new;
    new=new1;
   
    while(new!=NULL)
    {
    	printf("%dx^%d+",new->cof,new->exp);
    	
    	new=new->next;
    }
    printf("\n");
 }

void multiply()
{
 struct node *new,*temp1,*temp2,*temp;
 temp1 = head1;
 while(temp1 != NULL)
 {
  temp2=head2;
   while(temp2 != NULL)
   {
      new = (struct node *)malloc(sizeof(struct node));
      new->cof = temp1->cof * temp2->cof;
      new->exp = temp1->exp + temp2->exp;
      new->next = NULL;
      if(head3 == NULL)
      {
        head3 = new;
        temp = head3;
      }
      else
       {
		temp->next=new;
		temp=new;
	}
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
 }
 
 void sort()
 {
  struct node *temp,*new;
  int tmp,tmp1;
  temp=head3;
  while(temp->next!=NULL)
  {
    new=temp->next;
    while(new!=NULL)
    {
    if(new->exp > temp->exp)
    {
      tmp = temp->exp;
      temp->exp = new->exp;
      new->exp = tmp;
      
      tmp1 = temp->cof;
      temp->cof = new->cof;
      new->cof = tmp1;
     }
     new=new->next;
     }
    temp = temp->next;
   }
}

void sum()
{
  struct node *ptr1,*ptr2;
  ptr1 = head3;
  while(ptr1 != NULL)
  { ptr2=ptr1->next;
    if (ptr2==NULL)
  	   break;
    if(ptr1->exp == ptr2->exp)
    {
      ptr1->cof=ptr1->cof+ptr2->cof;
      ptr1->next=ptr2->next;
      free(ptr2);
     }
     else
        ptr1 = ptr1->next;
 }
}
      
      
      
      
      
      

      
      
    
      
      
      
      
     

 

