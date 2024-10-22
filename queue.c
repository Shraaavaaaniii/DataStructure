// C program to implement a queue using array (static memory)

#include <stdio.h>

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
    enqueue(3);
    enqueue(5);
    enqueue(-2);
    display();
    dequeue();
    peek();
    rear1();
    display();
    dequeue();
    display();
    return 0;
}