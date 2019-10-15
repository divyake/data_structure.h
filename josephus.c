#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void display(struct node *head);
void survivor(struct node *head, int skip);
void main()
{
	struct node *head = NULL,*first,*last,*temp;
	int n,i,f,a,e,b,skip;
	printf("Enter the size of linked list\n");
	scanf("%d",&n);
	printf("Enter the values\n");
	for(i=0;i<n;i++)
	{
		first = (struct node*)malloc(sizeof(struct node*));
		scanf("%d",&first->data);
		first->next=NULL;
		if(head == NULL)
		{
			head = first;
			last = head;
		}
		else
		{
			last->next=first;
			last = first;
		}
		last->next=head;	
}
display(head);
printf("Enter the value to skip : ");
scanf("%d",&skip);
survivor(head,skip);
}
void display(struct node *head)
{
	struct node *temp;
	temp=head;
	while(temp->next!=head)
	{
		printf("data = %d\n",temp->data);
		temp = temp->next;
	}
	printf("data = %d\n",temp->data);
}

void survivor(struct node *head, int skip)
{
struct node *p,*q;
int i;
p=q=head;
while(p->next!=p)
{
for(i=0;i<skip-1;i++)
{
q=p;
p=p->next;
}
q->next=p->next;
printf("%d is killed\n",p->data);
free(p);
p=q->next;
}
head=p;
}

