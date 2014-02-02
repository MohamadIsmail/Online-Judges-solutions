#include<iostream>
using namespace std;
int main()
{
long long n,sum;
while(cin >> n)
{
    if(n==0)break;
    do
	{
		sum = 0;
        while(n>0)
      {
          sum += n%10;
          n /= 10 ;
      }
          n = sum;
	}while(sum>=10);
cout <<sum <<endl;
}
return 0;
}