// LINKED LIST CREATION AND IMPLEMENTATION

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;           // to store the data element
    struct Node *next;         // to store the address of the next node

}Node;

int main()
{
    Node *head, *newnode , *temp;
    int choice=1;
    head=NULL;
    // LINKED LIST CREATION
    while(choice!=0)
    {
        newnode=(Node*)malloc(sizeof(Node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next = newnode;
            temp=newnode;
        }
        printf("Do you want to continue?(1/0)\n");
        scanf("%d",&choice);

    }
    temp=head;
    // LINKED LIST DATA PRINTING
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}
