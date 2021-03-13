#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int maxinarr(int a[], int n)
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
        if(a[i]>mx)
            mx=a[i];

    return mx;
}
void countsort(int a[] , int n)
{
        int i,j,k;
        int mxsize= maxinarr(a, n);
        int *c;
        c= (int *)malloc(sizeof(int)*(mxsize+1));

        for(i=0;i<=mxsize;i++)c[i]=0;

        for(i=0;i<n;i++)
            c[a[i]]++;

        i=0, j=0;
        while(j<mxsize+1)
        {
            if(c[j]==0) j++;
            else
            {
                a[i++]=j;
                c[j]--;
            }
        }
        free(c);

}
int main()
{
    int arr[]= {1,5,7,4,9,11,13,20,13};
    int n= sizeof arr/ sizeof(arr[0]);
    countsort(arr, n);

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}
