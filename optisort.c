// Optimising bubble sort
#include<stdio.h>
int main()
{
   int a[10],i,j,temp,flag;
   printf("Enter any 10 elements of array :");
   for(i=0;i<10;i++)              // To enter array elements
   {
      scanf("%d",&a[i]);
   }
   
   for(i=0;i<9;i++)     // Number of passes
   {
      flag=0;
      for(j=0;j<9-i;j++)    // Number of comparisons
      {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
         flag=1;
      } 
      if(flag==0)
      break;    
   }
   
   printf("Array sorted in ascending order :");       // To print elements of sorted array
   for(i=0;i<10;i++)
   {
      printf("\n%d",a[i]); 
   }
   return 0;
}
