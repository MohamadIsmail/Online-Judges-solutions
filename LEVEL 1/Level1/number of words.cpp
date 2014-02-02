#include<iostream>
#include<string>
using namespace std;

int main()
{
	int s,n=1;
	char arr[150];
		cin.get(arr,150);
		s=strlen(arr);
		for(int i=0; i<s; i++)
		{
			if(arr[i]==' ')
			{
				n++;
			}
		}
		cout<<s<<endl<<n<<endl;
	return 0;
}