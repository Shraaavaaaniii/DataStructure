// C program to sort array by merge sort alorithm

#include<stdio.h>

void mergesort(int arr[],int lb,int ub);

void merge(int arr[],int lb,int mid,int ub);

int main()
{
    int n,i;
    
    printf("Enter size of array :");
    scanf("%d",&n);
    
    int arr[n],lb=0,ub=n-1;
    
    printf("Enter %d elements of array : ",n);
    for(i = 0;i < n; i ++)
    {
       scanf("%d",&arr[i]); 
    }
    
    mergesort(arr,lb,ub);
    
    printf("Sorted array : ");
    
    for(i = 0;i < n; i ++)
    {
       printf("\n%d",arr[i]); 
    }
       
    return 0;
}

void mergesort(int arr[],int lb,int ub)
{
   int mid;
   if(lb<ub)
   {
      mid = (lb+ub)/2; 
      mergesort(arr,lb,mid);
      mergesort(arr,mid+1,ub);
      merge(arr,lb,mid,ub);
   }
}

void merge(int arr[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,k=lb,b[10];
    
    while(i<=mid && j<=ub)
    {
       if(arr[i] <= arr[j])
       {
         b[k] = arr[i];
         i++;
       }
       else
       {
         b[k] = arr[j];
         j++; 
       }
       k++;
    }
    
    if(i > mid)
    {
       while(j <= ub)
       {
          b[k] = arr[j];
          j++;
          k++;
       }
    }
    else
    {
       while(i <= mid)
       {
          b[k] = arr[i];
          i++;
          k++;
       }
    }  
    for(k = lb;k <= ub;k++)
    {
       arr[k] = b[k];
    }  
}
