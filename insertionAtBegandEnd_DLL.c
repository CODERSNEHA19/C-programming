// INSERTI0N AT BEGINNING AND END


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

void insertAtBeg()
{
    int ele;
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the data to be inserted at beginning\n");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insertAtEnd()
{
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the data to be inserted at end\n");
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->prev=tail;
    newnode->next=NULL;
    tail=newnode;
}
void main()
{
    create();
    printf("\nThe list before insertion\n");
    display(); 
    insertAtBeg();
    printf("\n The list after insertion at beginning\n");
    display();
    insertAtEnd();
    printf("\n The list after insertion at end\n");
    display();

}
