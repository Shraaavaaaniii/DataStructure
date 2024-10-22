// Insertion sort
#include<stdio.h>
int main()
{
   int a[10],i,j,key;
   printf("Enter any 10 elements of array :");
   for(i=0;i<10;i++)
   {
      scanf("%d",&a[i]);
   }
   
   for(i=0;i<9;i++)
   {
      key=a[i+1];
      for(j=i;j>=0;j--)
      {
         if(a[j]>key)
         {
            a[j+1]=a[j];
            a[j]=key;
         } 
      }
   }
   
   printf("Sorted array : ");
   for(i=0;i<10;i++)
   {
      printf("\n%d",a[i]);
   }
   return 0;
}
