//DELETE A NODE FROM THE GIVEN POSITION

#include <stdio.h>
#include<stdlib.h>

typedef struct
{
    int data;
    struct Node *next;
}Node;

void display(Node *ptr);
void delete(Node *ptr, int pos);

int main()
{
    int choice=1,pos;
    Node *head, *temp, *newnode;
    head = NULL;
    // CREATION OF LINKED LIST
    while(choice!=0)
    {
        newnode=(Node*)malloc(sizeof(Node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    printf("Do you want to continue(0/1)?\n");
    scanf("%d",&choice);
    }
    temp=head;
    printf("Enter the position from which the node is to be deleted\n");
    scanf("%d",&pos);
    printf("The list before deletion:\n");
    display(temp);
    printf("The list after deletion:\n");
    delete(temp,pos);       //send the starting location and the position of deletion
    
}

void display(Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

void delete(Node *ptr, int pos)
{
    int c=1;
    Node *t,*head;     // head stores the address of 1st location
    if(pos==1)
    {      
         /* If the 1st node is to be deleted then the 2nd node becomes the starting node
         so, head stores address of 2nd node*/
        head=ptr->next;
    }
    else
    {
        head=ptr;
        while(c!=pos-1)
        {
            ptr=ptr->next;
            c++;
        }
        t = ptr->next;              /* Address Swaping takes place*/
        ptr->next = t->next;                           
        
    }
    display(head);
}
   
