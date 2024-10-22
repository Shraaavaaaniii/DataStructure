// C program to sort array by using quick sort algorithm

#include<stdio.h>

int partition(int a[],int lb,int ub);
void Quicksort(int a[],int lb,int ub);

int main()
{
   int n,i;
   
   printf("Enter size of array : ");
   scanf("%d",&n);
   
   int a[n],lb=0,ub=n-1;
   
   printf("Enter %d elements of array : ",n);
   
   for(i = 0;i < n;i++)
   {
      scanf("%d",&a[i]);
   }
   
   Quicksort(a,lb,ub);
   
   printf("Sorted array : ");
   
   for(i = 0;i < n;i++)
   {
      printf("\n%d",a[i]);
   }   
   
   return 0;
}

int partition(int a[],int lb,int ub)
{
   int pivot=a[lb],temp;
   int start = lb;
   int end = ub;
   
   while(start < end)
   {
      while(a[start]<=pivot)
      {
         start++;
      }
      while(a[end]>pivot)
      {
         end--;
      }
      if(start < end)
      {
         temp = a[start];
         a[start] = a[end];
         a[end] = temp;
      }
      temp = a[lb];
      a[lb] = a[end];
      a[end] = temp;
      
      return end;
   }
}

void Quicksort(int a[],int lb,int ub)
{
   int loc;
   if(lb<ub)
   {
     loc = partition(a,lb,ub);
     Quicksort(a,lb,loc-1);
     Quicksort(a,loc+1,ub);     
   }
}
