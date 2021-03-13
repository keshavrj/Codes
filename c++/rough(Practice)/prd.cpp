#include <iostream>
using namespace std;

 int64_t product(int64_t arr[], int64_t n)
{
	int64_t max1 = 0, max2 =-1;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max1)
		{
			max2 = max1;
			max1 = arr[i];
		}

		else if (arr[i] > max2)
            {
			max2 = arr[i];
		    }

	}
	return max1*max2;
	}
int main()
{
    int64_t n;
    cin>>n;
    int64_t arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<product(arr,n)<<endl;
return 0;
}
