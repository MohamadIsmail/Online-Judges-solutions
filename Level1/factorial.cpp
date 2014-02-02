#include<iostream>
using namespace std;

int main()
{
	int n,result=1;
	cout<<"enter the number:\n";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		result=result*i;
	}
	cout<<"the factorial of "<<n<<" = "<<result<<endl;
	return 0;
}
