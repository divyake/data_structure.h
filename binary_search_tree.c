#include<stdio.h>
#include<stdlib.h>

struct binary_search_tree
{
    int data;
    struct binary_search_tree *left, *right;
}*root;

typedef struct binary_search_tree bst;

void insertNode();
void inorderTraversal();
void searchNode();
void minNode();
void maxNode();
void deleteNode();

void main()
{
    int ch = 0;
    while(ch != 6)
    {
        printf("\n");
        printf("Select Operation:\n");
        printf("1.Insert\n2.Inorder Traversal\n3.Search\n4.Min\n5.Max\n6.Delete\n7.Quit:");
        scanf("%d", &ch);
        
        switch (ch)
        {
        case 1:
            insertNode();
            break;

        case 2:
            inorderTraversal();
            break;

        case 3:
            searchNode();
            break;

        case 4:
            minNode();
            break;
        
        case 5:
            maxNode();
            break;

        case 6:
            deleteNode();
            break;

        case 7:
            printf("Exiting....\n");
            break;
        default:
            printf("Invalid choice %d\n", ch); break;
        }

    }
}

void insertNode()
{
    bst *tmp, *currentNode; int val;

    printf("Enter the value:");
    scanf("%d", val);

    currentNode = (bst*)malloc(sizeof(bst));

    currentNode->data = val;
    currentNode->left = currentNode->right = NULL;

    if(root == NULL)
        root = currentNode;
    else
    {
        while(tmp != NULL)
        {
            if(tmp->data > currentNode->data)
                tmp = tmp->left;
            else
                tmp = tmp->right;
        }

        tmp = currentNode;
    }
      
}

void inorderTraversal()
{
    
    
}