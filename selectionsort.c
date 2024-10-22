// C program to sort array by using selection sort algorithm

#include<stdio.h>
int main()
{
   int i,j,temp,min,n;
   
   printf("Enter size of array : ");
   scanf("%d",&n);
   int a[n];
   printf("Enter any %d elements of array : ",n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   
   for(i=0;i<n-1;i++)
   {
     min = i;
     for(j=i+1;j<n;j++)
     {
       if(a[min]>a[j])
       min = j;
     }
     temp = a[i];
     a[i] = a[min];
     a[min] = temp;
   }
   
   printf("Sorted Array :");
   for(i=0;i<n;i++)
   {
      printf("\n%d",a[i]);
   }
   
   return 0;
}  
