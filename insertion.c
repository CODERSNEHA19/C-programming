// INSERT AN ELEMENT AT A GIVEN POSITION IN A LINKED LIST

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    struct Node *next;
}Node;

void display(Node *ptr);
void insert(Node *ptr, int pos, int ele);

int main()
{
    int choice=1,pos,ele;
    Node *head, *newnode, *temp;
    head=NULL;
    while(choice!=0)
    {
        newnode=(Node*)malloc(sizeof(Node));
        printf("Enter the data\n");
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
        printf("Do you want to continue(0/1)?\n");
        scanf("%d",&choice);
    }
    printf("Enter the position and the element to be inserted\n");
    scanf("%d%d",&pos,&ele);
    temp=head;
    printf("The original list is:\n");
    display(temp);
    insert(temp,pos,ele);
    printf("The new list after insertion is:\n");
    display(temp);
    return 0;
    
}

void display (Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

void insert(Node *ptr,int pos,int ele)      //ptr is the pointer to current node
{
    int c=1,t,a;
    Node *follow;                   // follow is the pointer to the node after ptr
    while(c!=pos)
    {
        ptr=ptr->next;
        c++;
    }
    t=ptr->data;
    ptr->data=ele;
    ptr=ptr->next;
    while(ptr->next!=NULL)
    {
        a=ptr->data;
        ptr->data=t;
        t=a;
        ptr=ptr->next;
    }
    follow=(Node*)malloc(sizeof(Node));
    follow->next=NULL;
    ptr->next=follow;
    a=ptr->data;
    ptr->data=t;
    follow->data=a;
   



}

