#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int max=0,n,arr[10];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
		if (arr[i]>max)
		{
			/* code */
			max=arr[i];
		}
	}
	// cout<<max;
	int a[max+1]={0};
	for (int i = 0; i <n; ++i)
	{
		a[arr[i]]++;
	}
	for (int i = 0; i < n; ++i)
	{	
			if (arr[i]==max)
			{
				cout<<arr[i]<<" ->  ---"<<endl;
				break;
			}
			for (int j = arr[i]+1; j <= max; ++j)
			{
				/* code */

				if(a[j]==1){
					cout<<arr[i]<<" -> "<<j<<endl;
					break;
				}

		}
	}
	
	return 0;
}