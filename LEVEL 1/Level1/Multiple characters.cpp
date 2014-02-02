#include<iostream>
using namespace std;

int main()
{
	int i,s;
	char arr[80];
	cin.get(arr,80);
	s = strlen(arr);
	for( i=0; i<s; i++)
	{
		if(arr[i]==arr[i+1])
			i++;
		cout<<arr[i];
	}
	cout<<endl;
	return 0;
}