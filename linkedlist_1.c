#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void main()
{
struct node *head=NULL,*first,*last,*temp;
int n,i,f,a,e,b;
printf("enter the size of linkedlist\n");
scanf("%d",&n);

printf("Enter the values\n");
for(i=0;i<n;i++)
{
	first=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&first->data);
    first->next=NULL;
    if(head==NULL)
    {
    	head=first;
    	last = head;
    }
    else
    {
    	last->next=first;
    	last=first;
    }
   
}
    printf("Enter 0 to end , 1 to display, 2 to insert in the beginning, 3 to insert at the end and 4 to insert anywhere\n");
    scanf("%d",&i);
    switch(i)
    {
    	case 1:
    	display(head);
    	break;
    	case 2:
    	printf("enter the value to insert");
    	scanf("%d",&f);
    	front(head,f);
    	break;
    	case 3:
    	printf("enter the value to insert");
    	scanf("%d",&e);
    	end(head,e);
    	break;
    	case 4:
    	printf("enter the position where you want to insert");
    	scanf("%d",&b);
    	printf("enter the value to insert");
    	scanf("%d",&a);
    	after(head,b,a);
    	break;
    	default :
    	printf("enter a valid value");


    }
}
void display(struct node *head)
{
struct node* temp;
temp=head;
while(temp!=NULL)
{
	printf("Data = %d\n",temp->data);
	temp=temp->next;
}
}

void front(struct node *head,int value)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->next=head;
    display(p);
    
}

void end(struct node *head,int value)
{
    struct node *p,*q;
    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    q=head;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    q->next = p;
    display(head);
}

void after(struct node *head,int b, int a	)
{
	int i;
	struct node *x;
	x = malloc(sizeof(struct node));
	x=head;
	for(i=0;i<b-1;i++){
		x = x->next;
	}
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = a;
    p->next = x->next;
    x->next = p;
    display(head);
}
