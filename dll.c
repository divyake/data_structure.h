#include<stdio.h>
#include<stdlib.h>
 void deletion(int );
 void insert_beg();
 void insert_end();
 void insert_intermediate();

struct node
{
	int data;
	struct node *next;
	struct node *pre;
}; 

struct node * create(int );
void display(struct node *);
 
struct node *head1,*head2;
void main()
{
 int size1;
 printf("enter the size1\n");
	scanf("%d",&size1);
 head1=create(size1);
      display(head1);
      insert_beg();
      display(head1);
      insert_end();
      display(head1);
      insert_intermediate();
      display(head1);
      
      //deletion(size1);
      //display(head1);
      
 }
 
 
 
 
 struct node * create(int size)
{
	struct node *new,*temp,*head=NULL;
	int i;
	printf("Enter the input:\n");
	for(i=0;i<size;i++)
	{
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&new->data);
		new->next=NULL;
		new->pre=NULL;
		if(head==NULL)
		{
			head=new;
			temp=head;
		}
		else
		{
			temp->next=new;
			new->pre=temp;
			temp=new;
		}
        }
        return head;
}

 
 void display(struct node *new1)
 
{
   struct node *new,*prev;
    new=new1;
    printf("linked list are:\n");
    while(new!=NULL)
    {
    	printf("%d\n",new->data);
    	prev=new;
    	new=new->next;
    }
    
    printf("\nlinked list in reverse  are:\n");
    while(prev!=NULL)
    {
    	printf("%d\n",prev->data);
    	//prev=new;
    	prev=prev->pre;
    }
    
}

 void deletion(int size1)
 {
   int pos,i;
   printf("enter the positon to be deleted\n");
   scanf("%d",&pos);
   struct node *temp,*prev;
   struct node *new,*ptr1;
   temp=head1;
    if (pos==1)
    {
    head1=temp->next;
    temp->next->pre=NULL;
    free(temp);
    }
    else if (pos==size1)
    {
      while(temp->next!=NULL)
      {
       temp=temp->next;
       }
       prev=temp->pre;
       prev->next=NULL;
       free(temp);
    }
  
    else
    {
    
    for(i=1;i<pos-1;i++)
    {
    temp=temp->next;
    }
    prev=temp->next;
    new=temp->next->next;
    temp->next=new;
    new->pre=temp;
    free(prev);
    }
    
  }

 void insert_beg()
{
   struct node *new,*temp; 
   temp=head1;
   
                printf("Enter a value to store at the begining of node");  
                new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&new->data);
		new->next=NULL;
		new->pre=NULL; 
            new->next=head1;
            temp->pre=new;
            head1=new;
}
              
void insert_end()
{
   struct node *new,*temp; 
   temp=head1;
   
                printf("Enter a value to store at the end of node");  
                new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&new->data);
		new->next=NULL;
		new->pre=NULL; 
          
     while(temp->next!=NULL)
       {
       temp=temp->next;
       }  
     temp->next=new;
     new->pre=temp;
}
          
void insert_intermediate()
{
   struct node *new,*temp,*temp1; 
   temp=head1;
   int pos,i;
   printf("enter the positon :\n");
   scanf("%d",&pos);
   
                printf("Enter a value to store\n");  
                new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&new->data);
		new->next=NULL;
		new->pre=NULL; 
          for(i=1;i<pos-1;i++)
           {
              temp=temp->next;
           }
           temp1=temp->next;
 new->next=temp1;
 temp1->pre=new;      
 temp->next=new;
 new->pre=temp;
 
 }
 
     

