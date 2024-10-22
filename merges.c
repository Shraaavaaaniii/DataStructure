//... C program to sort array by merge sort

#include<stdio.h>

void merge(int arr[],int l,int mid,int u)
{
    int n1=mid-l+1;
    int n2=u-mid;
    
    int a[n1];
    int b[n2]; // Temparary array

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;i++;
        }
        else
        {
            arr[k]=b[i];
            k++;j++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
        k++;i++;
    }

    while(j<n2)
    {
        arr[k]=a[j];
        k++;j++;
    }

}

void mergeSort(int arr[],int l,int u)
{
    if(l<u)
    {
        int mid=(l+u)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,u);
        merge(arr,l,mid,u);
    }
}

int main()
{
    int arr[]={5,4,3,2,1};

    mergeSort(arr,0,4);

    for(int i=0;i<5;i++)
    {
       printf("%d ",arr[i]);
    }

    return 0;
}