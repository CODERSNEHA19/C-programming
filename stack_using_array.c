// STACK USING ARRAY

#include <stdio.h>
#include <stdlib.h>

int stack[100];
int top=-1,n;
void push(int x)
{
    if(top==n-1)
        printf("STACK OVERFLOW\n");
    else
    {
        stack[++top]=x;
    }
}

void pop()
{
    if(top==-1)
        printf("STACK UNDERFLOW\n");
    else
    {
        printf("%d\n",stack[top]);
        top--;
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
        printf("%d ",stack[i]);
}

int main()
{
    int choice,val,r;
    printf("Enter the size of the stack\n");
    scanf("%d",&n);
    r=n;
   
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