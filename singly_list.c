#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node*next;
};
 
void creation(void)
{
            int data;
            struct node *newnode, *head, *temp;
            head=0;
            newnode =(struct node*)malloc(sizeof(struct node));
            printf("Enter the data :");
            scanf("%d",&newnode->data);
            newnode->next=0;
            if(head==0)
              {
               head=temp=newnode;
              }
             else
             {
              temp->next=newnode;
              temp=newnode;
              }
     
 }
void display(void)
{
  struct node *head;
  struct node *temp;
  temp=head;
  while(temp!=NULL)
  {
   printf("Values in the linked list are %d",temp->data);
   temp=temp->next;
  }
}
void insert_at_beginning(void)
{
  struct node *newnode,*head;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter data :");
  scanf("%d",&newnode->data);
  newnode->next=head;
  head=newnode;
}
void insert_at_end(void)
{
 struct node *newnode,*temp,*head;
  temp=head;
   while(temp->next!=NULL)
   {
    temp=temp->next;
   }
   temp->next=newnode;
 }
void insert_at_any_pos(void)
{
 struct node *temp, *head, *newnode;
 int pos,i=1;
 printf("Enter position :");
 scanf("%d",&pos);
 temp=head;
 while(i<pos)
  {
   temp=temp->next;
    i++;
  }
 newnode->next=temp->next;
 temp->next=newnode;
}
 

int main()
{
        int n,choice;
        struct node *newnode, *head, *temp;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        printf("1.Creation\n 2.Display\n 3.Insertion at beginning\n 4.Insertion at end\n 5.Insertion at any position\n 6.EXIT");
      do
       {
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice)
       {
        case 1:
         creation();
          break;
        
        case 2:
        
          display();
          break;
        
        case 3:
       
        insert_at_beginning();
        break;
       
        case 4:
       
        insert_at_end();
        break;
       
        case 5:
       
         insert_at_any_pos();
         break;
       
        case 6:
       
          printf("\n\t EXIT  ");
          break;
       
        default:
        
          printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
        
     }
   }
  while(choice!=0);
    return 0;
   }

  
