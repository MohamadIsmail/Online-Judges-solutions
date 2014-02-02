#include <iostream>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	for(int s=0; s<n; s++)
	{
		int arr[10];
		bool lower=false,greater=false;
		for(int i=0;i<10;i++)
		{
			cin>>arr[i];
		}
		if(s==0)
			cout<<"Lumberjacks:\n";
		for(int j=0; j<9; j++)
		{
			if(arr[j]<arr[j+1])
			{
				lower=true;
				if(greater==true)
				{
					lower=false,greater=false;
					break;
				}
			}
			if(arr[j]>arr[j+1])
			{
				greater=true;
				if(lower==true)
				{
					lower=false,greater=false;
					break;
				}
			}
		}
		if((lower==false)&&(greater==false))
			cout<<"Unordered"<<endl;
		else
			cout<<"Ordered"<<endl;
	}
return 0;
}