#include<stdio.h>
int main()
{
  int a[10],flag=0,element;
  printf("Enter 10 elements of array : ");
  for(int i=0;i<10;i++)
  {
     scanf("%d",&a[i]);
  }
  printf("Enter any element whose position is to be find : ");
  scanf("%d",&element);
  for(int i=0;i<10;i++)
  {
     if(a[i]==element)
     { 
       flag++;
       printf("\n%d is found at %d",element,i);
     }
  }
  
  if(flag==0)
  {
    printf("Element is not found");
  }
  return 0;
}
