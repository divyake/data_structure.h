#include<stdio.h>
#include<stdlib.h>
struct tree{
	int data;
	struct node *left;
	struct node *right;
};

struct node *create()
{
    struct node *p;
    int x;
    printf("Enter data(-1 for no node):");
    scanf("%d",&x);

    if(x==-1)
	return NULL;

    p=(struct node*)malloc(sizeof(node));
    p->data=x;
    printf("Enter left child of %d:\n",x);
    p->left=create();
    printf("Enter right child of %d:\n",x);
    p->right=create();
    return p;
}
void preorder(struct node *t)
{
  if(t!=NULL)
  {
    printf("  %d",t->data);
    preorder(t->left);
    preorder(t->right);
  }
}
void inorder(struct node *t)
{
  if(t!=NULL)
  {
    inorder(t->left);
    printf("  %d",t->data);
    inorder(t->right);
  }
}
void postorder(struct node *t)
{
  if(t!=NULL)
  {
    postorder(t->left);
    postorder(t->right);
    printf("  %d",t->data);
  }
}
void main()
{
 struct node *root;
  root=create();
  printf("\nThe preorder traversal of tree is: ");
  preorder(root);
  printf("\nThe inorder traversal of tree is: ");
  inorder(root);
  printf("\nThe postorder traversal of tree is: ");
  postorder(root);
}

