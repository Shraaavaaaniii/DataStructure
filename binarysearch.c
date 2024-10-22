//..............
#include<stdio.h>
int main()
{
  int a[10],beg=0,mid,end=9,element,flag=0;
  printf("Enter any 10 elements of array : ");
  for(int i=0;i<10;i++)
  {
     scanf("%d",&a[i]);
  }
  printf("Enter any element whose position you want to find : ");
  scanf("%d",&element);
  while(beg<=end)
  {
    mid=(beg+end)/2;
    if(a[mid]==element)
    { 
       printf("\n%d is found at index %d ",element,mid);  
       flag ++;   
    }
    if(a[mid]>element)
    {  end=mid-1;  }
    else
    {  beg=mid+1;  }
  }
  
  if(flag==0)
  {  printf("\n%d is not found",element);  }
  return 0;
}
