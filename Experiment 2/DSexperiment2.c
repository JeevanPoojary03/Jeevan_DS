#include<stdio.h>
#include<stdlib.h>
#define size 10

int stack[size];
int top=-1;

void push(int);
void pop();
void display();

void main()
{
    int value,choice;

    while(1)

{

    printf("1.Insert element");
    printf("2.Delete element");
    printf("3.Display array");
    printf("4.Exit");
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        print("Enter the value to be inserted:");
        scanf("%d",&value);
        push(value);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
    case 4:
        exit(0);

    }
}
}

void push(int value)
{
    if(top==size-1)
        print("\nStack is Full!!! Insertion is not possible!!!");
    else
    {
        top++;
        stack[top]=value;
        printf("\nInsertion success!!!");
    }
}
void pop()
{
    if(top==-1)
        printf("\nStack is Empty!!! Deletion is not possible!!!");
    else
    {
        printf("\nDeleted:%d",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
        pirntf("\nStack is Empty");
    else
    {
        int i;
        printf("\nStack elements are:\n");
        for(i=top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}
