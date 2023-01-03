// CREATION OF DOUBLY LINKED LIST

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head,*tail; //global variables
void create()
{
    int choice;
    printf("Enter the no of links to be created\n");
    scanf("%d",&choice);
   struct Node *newnode,*temp;
    head=NULL;
    while(choice !=0)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));// node created
        printf("Enter the data to be entered\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
       choice--;
    }

}

void display()
{
    struct Node *temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void main()
{
    create();
    display(); 
}
