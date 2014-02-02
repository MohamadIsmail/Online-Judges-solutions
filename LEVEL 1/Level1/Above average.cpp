#include<iostream>
#include<iomanip>
using namespace std;
#define floatingpoint setprecision(3)<<fixed

int main()
{
	int c;
	cin>>c;
	for(int i=0; i<c; i++)
	{
		int arr[1000],n,sum=0;
		float z=0;
		cin>>n;
		if((n<1)||(n>1000))
			break;
		for(int j=0; j<n; j++)
		{
			cin>>arr[j];
			sum+=arr[j];
		}
		sum/=n;
		for(int l=0; l<n; l++)
		{
			if(arr[l]>sum)
				z++;
		}
		z=(z*100)/n;
		cout<<floatingpoint<<z<<"%"<<endl;
	}
	return 0;
}