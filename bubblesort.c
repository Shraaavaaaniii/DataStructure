// Bubble sort
#include<stdio.h>
int main()
{
   int i,j,a[10],temp;
   printf("Enter any 10 elements of array : ");
   for(i=0;i<10;i++)
   {
      scanf("%d",&a[i]);
   }
   
   for(i=0;i<9;i++)
   {
      for(j=0;j<10;j++)
      {
         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
         printf("%d\t",a[j]);
      }
      printf("\n");
   }  
   return 0;
}
