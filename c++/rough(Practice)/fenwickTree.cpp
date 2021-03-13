#include <iostream>
using namespace std;

int getsum(int ft[],int index)
{
    index+=1;
    int sum=0;
    while(index>0)
    {
        sum+=ft[index];
        index-=index&(-index);
    }
    return sum;
}
void update(int ft[],int n, int pos,int val)
{
    pos+=1;// ft index is 1 more
    while(pos<=n)
    {
        ft[pos]+=val;
        pos+=pos&(-pos);
    }
}
int *constructFT(int arr[],int n)
{
    int *ft= new int[n+1];
    for(int i=0;i<=n;i++)
        ft[i]=0;
    for(int i=0;i<n;i++)
        update(ft,n,i,arr[i]);
return ft;
}

int main()
{
	int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(freq)/sizeof(freq[0]);
	int *BITree = constructFT(freq, n);
	cout << "Sum of elements in arr[0..5] is "<< getsum(BITree, 5);

	update(BITree, n, 3, 6-freq[3]); //Update BIT for above change in arr[]// update adds the value to the given pos;

	cout << "\nSum of elements in arr[0..5] after update is "<< getsum(BITree, 5);


	return 0;
}

