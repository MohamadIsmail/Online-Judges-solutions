#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


bool used[16];
char arr[16];
string str;

void solve(int index,int n)
{
	if(index == n)
	{
		for(int i = 0; i < n; i++)
			cout << result[i];
		cout << endl;
		return;
	}
	for(int i = 0; i < n; i++)
	{
		if(used[i] == false)
		{
			used[i] = true;
			result[index]= arr[i];
			solve(index + 1,n);
			used[i] = false;
		}
	}
}


int main()
{
	int h,n,t;
	cin>>t;
	cout<<endl;
	cin.ignore();
	getline(cin,str);
	for(int i=1; i<=t; i++)
	{
		cin>>n>>h;
		int j;
		for(j=0; j<n-h; j++)
			arr[j]='0';
		for(int l=j; l<n; l++)
			arr[l]='1';
		solve(0,n);
		do {
		    for(int m=0; m<n; m++)cout<<arr[m];
		    cout<<endl;
		}while(next_permutation(arr,arr+n));
		if(i!=t)cout<<endl;
	}
	return 0;
}
