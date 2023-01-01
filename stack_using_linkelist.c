// STACK USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   struct node *next;
    int data;
}Node;

Node *top=NULL;

void push(int x)
{
    Node *newnode=(Node*)malloc(sizeof(Node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}

void pop()
{
    if(top==NULL)
        printf("STACK UNDERLOW\n");
    else
    {
        printf("The popped item is: %d\n",top->data);
       // free(top);
        top=top->next;
        
    }
}

void display()
{
    Node *ptr=top;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    int choice,val,r;
    printf("Enter the size of the stack\n");
    scanf("%d",&r);
   // r=n;
   
    while(r!=0)
    {
         printf("Enter:\n1: To Push an item in stack\n2: To Pop an item from stack\n3: To display the stack\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the value to be pushed\n");
                    scanf("%d",&val);
                    push(val);
                    r--;
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            default: printf("Invalid Input\n");
        }
       
    }
    display();
}