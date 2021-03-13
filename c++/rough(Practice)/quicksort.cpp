#include<iostream>
using namespace std;
#include<stdio.h>

int partition (int arr[], int low, int high)
{
    int pivot = arr[(high+low)/2];
    int i = low-1;
    int j=high+1;


    while(i<j)
    {
    do
    {
     i++;
    }while(arr[i]<=pivot);

    do
    {
     j--;
    }while(arr[j]>pivot);

    if(i<j)swap(arr[i], arr[j]);

   }
   swap(arr[(low+high)/2],arr[j]);
    return j;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    quickSort(arr, 0, n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<<"  ";
    return 0;
}
