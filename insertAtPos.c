// INSERT AT ANY POSITION

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
 struct Node *head,*tail;
 
void create()
{
    int choice;
    printf("How many lists do you want to create?\n");
    scanf("%d",&choice);
   struct Node *newnode,*temp;
    head=NULL;
    while(choice !=0)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
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

void insertAtPos()
{
    int pos,i=1;
    struct Node *newnode,*temp=head;
    printf("\nEnter the position\n");
    scanf("%d",&pos);
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the data to be inserted\n");
    scanf("%d",&newnode->data);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
}


void main()
{
    create();
    printf("\nThe list before insertion\n");
    display(); 
    insertAtPos();
    printf("\nThe list after insertion\n");
    display();
    
}
