//#include<iostream>
//#include<algorithm>
//#include <limits.h>
//#include<utility>
//#include<string>
//using namespace std;
//
//pair<int ,int> arr[10000002];
//
//void sieve()
//{
//	int x=1,y=1;
//	arr[0].first=x,arr[0].second=y;
//	for(int i=1; i<10000002; i++)
//	{
//		arr[i].first=x,arr[i].second=++y;
//		i++;
//		if(i>=10000001)
//			break;
//		while(y>1)
//		{
//			arr[i].first=++x,arr[i].second=--y;
//			i++;
//			if(i>=10000001)
//				break;
//			
//		}
//		if(i>=10000001)
//			break;
//		arr[i].first=++x,arr[i].second=y;
//		i++;
//		if(i>=10000001)
//			break;
//		while(x>1)
//		{
//			arr[i].first=--x,arr[i].second=++y;
//			i++;
//			if(i>=10000001)
//				break;
//		}
//		if(i>=10000013)
//			break;
//		i--;
//	}
//}
//int main()
//{
//	sieve();
//	int n;
//	while(cin>>n)
//	{
//		cout<<"TERM "<<n<<" IS "<<arr[n-1].first<<"/"<<arr[n-1].second<<endl;
//	}
//	return 0;
//}