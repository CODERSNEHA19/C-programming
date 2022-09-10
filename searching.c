// SEARCHING AN ELEMENT FROM LINKED LIST

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    struct Node *next;
}Node;

void search(Node *ptr, int ele);

int main()
{
    int choice=1,ele;
    Node *head , *newnode , *temp;
    head=NULL;
    while(choice!=0)
    {
        newnode=(Node*)malloc(sizeof(Node));
        printf("Enter an data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        { 
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue?(0/1)\n");
        scanf("%d",&choice);
    }
    temp=head;
    printf("Enter an element to be searched\n");
    scanf("%d",&ele);
    search(temp,ele);
    return 0;

}

void search(Node *ptr, int ele)
{
    Node *pos;
    int c=0;
    while(ptr!=NULL)
    {
        c++;        // counts the no of iterations b4 the loop stops
        if(ptr->data==ele)
        {
            pos=ptr; 
            printf("Element found at Node %d and address %p",c,pos);
            break;
        }
        else
        {
            ptr=ptr->next;
        }
    }
    if(ptr==NULL)
        printf("Element not present");
}