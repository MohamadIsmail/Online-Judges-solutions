#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n;
	while(cin>>n&&n>0&&n<101)
	{
		int start=0,end=n-1;
		bool palindrome=true;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int j=0;j<n/2; j++)
		{
			if(arr[start]!=arr[end])
			{
				palindrome=false;
				break;
			}
			start++;
			end--;
		}
		if(palindrome==false)
			cout<<"Not palindrome"<<endl;
		else
			cout<<"Palindrome"<<endl;
	}
}
