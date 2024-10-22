//Program to implement linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;
};

//Head and newnode pointer globally declared
struct node *head=0;
struct node *newnode;

void display();
void insertion(int x);
void insertbeg(int x);
void insertend(int x);
void insertpos(int x);
void deletion();
void deletebeg();
void deleteend();
void deletepos();
void serach(int val);

int main()
{

   int ch,item;
   struct node *temp;

    do{
       printf("\nFollowing are the oprations on Linked list");
       printf("\n1.Insertion\n2.Deletion\n3.Searching\n4.Display/Traversing\n5.Exit\n");
       printf("\nEnter your choice : ");
       scanf("%d",&ch);
       switch(ch)
       {
          case 1:
               printf("\nEnter data : ");
               scanf("%d",&item);
               insertion(item);
               break;
          case 2:
               deletion();
               break;
          case 3:
               printf("\nEnter data : ");
               scanf("%d",&item);
               serach(item);
               break;
          case 4:
               display();
               break;
          case 5:
               break;
          default:
               printf("\nPlease enter valid entry");

       }
     }while(ch!=5);

   return 0;
}

//Taking choice from user for insertion
void insertion(int x)
{
   int ch;
   printf("\n1.At beginning\n2.At end\n3.At any position\n");
   
   printf("\nEnter your choice : ");
   scanf("%d",&ch);
   
   if(ch==1)
   {
      insertbeg(x);
   }
   else if(ch==2)
   {
      insertend(x);
   }
   else if(ch==3)
   {
      insertpos(x);
   }
   else
   {
      printf("\nPlease enter valid entry");
   }
}

//Displaying elements of linked list
void display()
{
   struct node *temp;
   temp=head;
   printf("\nData present in linked list : ");
   while(temp != 0)
   {
      printf("\n%d",temp->data);
      temp = temp->next;
   }
}

//Insertion at beginning
void insertbeg(int x)
{
   
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = x;
   newnode->next = head;
   head = newnode;
}

//Insertion at end
void insertend(int x)
{
   struct node *temp;
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = x;
   newnode->next = 0;
   temp = head;
   while(temp->next != 0)
   {
      temp = temp->next;
   }
   temp->next = newnode;
}

//Insertion at any position
void insertpos(int x)
{
    struct node *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    int pos,i=1;
    printf("\nEnter any position : ");
    scanf("%d",&pos);
    temp = head;
    while(i < pos-1)
    {
       temp = temp->next;
       i++;        
    }
    newnode->next = temp->next;
    temp->next = newnode;
}




//Taking choice from user for insertion
void deletion()
{
   int ch;
   printf("\n1.At beginning\n2.At end\n3.At any position\n");
   
   printf("\nEnter your choice : ");
   scanf("%d",&ch);
   
   if(ch==1)
   {
      deletebeg();
   }
   else if(ch==2)
   {
      deleteend();
   }
   else if(ch==3)
   {
      deletepos();
   }
   else
   {
      printf("\nPlease enter valid entry");
   }
}

void deletebeg()
{
    struct node *temp;
    temp = head;
    head = head->next;
    printf("\n%d is deleted from list",temp->data);
    free(temp);
}

void deleteend()
{
    struct node *temp,*prev;    
    temp = head;
    while(temp->next != 0)
    {
       prev = temp;
       temp = temp->next;
    }    
    prev->next = 0;
    printf("\n%d is deleted from list",temp->data);
    free(temp);    
}

void deletepos()
{
    struct node *temp,*nextnode;
    int pos,i=1;
    printf("\nEnter any position : ");
    scanf("%d",&pos);
    temp = head;
    while(i < pos-1)
    {
       temp = temp->next;
       i++;        
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    printf("\n%d is deleted from list",nextnode->data);
    free(nextnode);     
}

void serach(int val)
{
    struct node *temp;
    int i = 1,flag = 1;
    temp = head;
    while(temp != 0)
    {
        if(temp->data == val)
        {
            printf("\nValue is found at %d",i);
            flag = 0;
            break;
        }
        temp = temp->next;
        i++;
    }
    if(flag == 1)
    {

        printf("\nValue is not found");        
    }
}