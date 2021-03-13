#include<stdio.h>
#include<limits.h>
void swap(int *a, int *b)
{
    int temp;
    temp= *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int h)
{
int pivot=arr[l], i=l, j=h;
do
{
    do
        {
            i++;
        }while(arr[i]<=pivot);

    do
        {
            j--;
        }while(arr[j]>pivot);

    if(i<j)swap(&arr[i] , &arr[j]);

}while(i<j);
swap(&arr[l], &arr[j]);
    return j;
}
void quicksort(int arr[], int l, int h)
{
    int k;
    if(l<h)
    {
    k= partition(arr, l , h);
    quicksort(arr, l , k);
    quicksort(arr, k+1, h);
    }

}


int main()
{
    int i,n;
    int arr[]= {5, 4, 3, 1, 34, 6, 78, 534 ,INT_MAX};
    n= sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0 ,n-1);
    for(i=0;i<n-1;i++)
        printf("%d ",arr[i]);
    return 0;
}
