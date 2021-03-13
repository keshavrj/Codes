#include<stdio.h>
void merge(int a[], int l , int mid , int h)
{
    int i=l,k=l, j=mid+1;
    int b[100];// b[h+1];
 while(i<= mid && j<=h)
 {
     if(a[i]<a[j])
        b[k++]=a[i++];
    else
        b[k++]= a[j++];
}
for(;i<=mid;i++)
    b[k++]= a[i];
for(; j<=h;j++)
    b[k++]= a[j];

for(i=l; i<=h;i++)
    a[i]=b[i];
}

void mergesort(int a[], int l, int h)
{
    int mid;
    if(l<h)
    {
        mid= (l+h)/2;
        mergesort(a, l, mid);
        mergesort(a, mid+1, h);
        merge(a, l , mid ,h);
    }
}

int main()
{
    int arr[]= {4,6,35,64,453, 465,984,743,2235,5882,-1};
    int n= sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, n-1);

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}
