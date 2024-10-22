//Implement a stack using linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;  
};

struct node *top = 0;

void push(int a);
void pop();
void display();
void peek();

int main()
{
   int item,ch;
   do{
        printf("\nFollowings are oprations on stack\n\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
           case 1:
                 printf("\nEnter an element :");
                 scanf("%d",&item);
                 push(item);
              break;
           case 2:
                 pop();
              break;
           case 3:
                 peek();
              break;
           case 4:
                 display();
              break;
           case 5:
              break;
        }
 
   }while(ch != 5);

   return 0;
}

void push(int a)
{
   struct node *newnode;

      newnode = (struct node *)malloc(sizeof(struct node));
      newnode->data = a;
      newnode->next = top;
      top = newnode;
}

void pop()
{
   struct node *temp;
   if(top == 0)
   {
      printf("\nStack is empty");
   }
   else
   {
      temp = top;
      top = top->next;
      printf("\n%d is deleted from stack",temp->data);
      free(temp);
   }
}

void display()
{
   struct node *temp;
   if(top == 0)
   {
      printf("\nStack is empty");
   }  
   else
   {
      temp = top;
      printf("\nData present in list : ");
      while(temp != 0)
      {
         printf(" %d",temp->data);
         temp = temp->next;
      }
   }
}

void peek()
{
   if(top == 0)
   {
      printf("\nStack is empty");
   }
   else
   {
      printf("\nTop is pointing to %d",top->data);
   }
}