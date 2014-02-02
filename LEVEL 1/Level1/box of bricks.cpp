#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,i=0;
	while(cin>>n)
	{
		if(n==0)break;
		int arr[100], sum=0, mov=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		sum=sum/n;
		for(int j=0; j<n; j++)
		{
			mov+=abs(sum-arr[j]);
		}
		mov=mov/2;
		i++;
		cout<<"Set #"<<i<<endl<<"The minimum number of moves is "<<mov<<"."<<endl<<endl;
	}
}