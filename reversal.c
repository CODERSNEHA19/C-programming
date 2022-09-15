// Reversing a linked list
/* Original:
    [7,100]->[2,200]->[9,150]->[15,Null]
      300      100      200      150

      reversed:
      [7,Null]<-[2,300]<-[9,100]<-[15,200]
        300      100      200      150       */


#include <stdio.h>
//NODE DECLARATION
typedef struct 
{
    int data;
    struct Node *next;
}Node;

//Linked List Printing
void display(Node *ptr)
{
    Node *temp;
    temp=ptr;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

//LINKED LIST REVERSAL
void reverse(Node *ptr)
{
    Node *prevnode, *currentnode , *nextnode;
    prevnode = NULL;
    currentnode = ptr;
    nextnode =ptr;
    while(nextnode!=NULL)
    {
        nextnode = nextnode->next;      //starts pointing to the next node
        currentnode->next = prevnode;   // breaks the link b/w current and prev node
        prevnode = currentnode;         
        currentnode = nextnode;
    }
    printf("The list after reversal is:\n");
    display(prevnode);
}

int main()
{
    
    int choice=1;
    Node *head,*newnode,*temp;
    head =NULL;
    while(choice!=0)
    {
        newnode=(Node*)malloc(sizeof(Node));
        printf("Enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue?(0/1)\n");
        scanf("%d",&choice);
    }
    printf("The list before reversal is:\n");
    display(head);
    reverse(head);
    return 0;
}