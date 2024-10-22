//Implement a queue using linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;
};

struct node *front = 0,*rear = 0;

void enqueue();
void dequeue();
void peek();
void reare();
void display();

int main()
{
   
   int item,ch;
   do{
        printf("\nFollowings are oprations on queue\n\n1.Enqueue\n2.Dequeue\n3.Front\n4.Rear\n5.Display\n6.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
           case 1:
                 printf("\nEnter an element :");
                 scanf("%d",&item);
                 enqueue(item);
              break;
           case 2:
                 dequeue();
              break;
           case 3:
                 peek();
              break;
           case 4:
                 reare();
              break;
           case 5:
                 display();
              break;
           case 6:
              break;
           defualt:
                 printf("\nPlease enter a valid entry");
        }
 
   }while(ch != 6);  
   return 0;
}

void enqueue(int a)
{
   struct node *newnode;
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = a;
   newnode->next = 0;
   if(front == 0 && rear == 0)
   {
      printf("\nQueue is empty");
      rear = front = newnode;
   }  
   else
   {
      rear->next = newnode;
      rear = newnode;
   }
}

void dequeue()
{
   struct node *temp;
   if(front == 0 && rear == 0)
   {
      printf("\nQueue is empty");      
   }
   else
   {
      temp = front;
      printf("\n%d is deleted from queue",temp->data);
      front = front->next;
      free(temp);
   }
}

void display()
{
   struct node *temp;
   if(front == 0 && rear == 0)
   {
      printf("\nQueue is empty");      
   }
   else
   {
      temp = front;
      printf("\nElements of queue are : ");
      while(temp != 0)
      {
          printf(" %d",temp->data);
          temp = temp->next;
      }
   }   
}

void peek()
{
   if(front == 0 && rear == 0)
   {
      printf("\nQueue is empty");      
   }   
   else
   {
      printf("\nFront is pointing to %d",front->data);
   }
}

void reare()
{
   if(front == 0 && rear == 0)
   {
      printf("\nQueue is empty");      
   }   
   else
   {
      printf("\nRear is pointing to %d",rear->data);
   }
}