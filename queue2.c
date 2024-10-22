// C program to implement a queue using array (static memory)
#include<stdio.h>

#define n 5
int queue[n];
int front = -1;
int rear = -1;

void enqueue(int a)
{
    if (rear == n - 1)
    {
        printf("\nOverflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = a;
    }
    else
    {
        rear++;
        queue[rear] = a;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nUnderflow");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("\n%d is deleted from queue", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nElements present in queue are : ");
        for (int i = front; i <= rear; i++)
        {
            printf(" %d",queue[i]);
        }
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    } 
    else
    {
        printf("\nFront is pointing to %d",queue[front]);
    }   
}

void rear1()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    } 
    else
    {
        printf("\nRear is pointing to %d",queue[rear]);
    }   
}

int main()
{
    int choice,item;
    char ch;
    do{
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Rear\n");
    printf("Enter your choice(1/2/3/4/5) : ");
    scanf("%d",&choice);
  
    switch(choice)
    {
        case 1 :
                printf("Enter any item : ");
                scanf("%d",&item);
                enqueue(item);
            break;
        case 2 : 
                dequeue();
            break;
        case 3 : 
                display();
            break;
        case 4 : 
                peek();
            break;
        case 5 : 
                 rear1();
            break;     
        case 6 :
            break;
        default :
            printf("Please Enter a valid entry");           

    }
    }while(choice != 6);

    return 0;
}