//#include<iostream>
//#include<algorithm>
//#include <limits.h>
//#include<utility>
//#include<string>
//#include<cmath>
//using namespace std;
//
//
//struct temp
//{
//	int diff;
//	char store;
//};
//int main()
//{
//	//sieve();
//	int n,t;
//	char*arr;
//	temp temp1;
//	while(cin>>n && n)
//	{
//		temp1.diff=0,temp1.store='A';
//		t=1000000000;
//		arr=new char[n];
//		for(int i=0 ;i<n; i++)
//		{
//			cin>>arr[i];
//		}
//		for(int i=0 ;i<n; i++)
//		{
//			if(arr[i]=='Z')
//			{
//				t=0;
//				break;
//			}
//			if(temp1.store=='A' && arr[i]!='.')
//				temp1.store=arr[i];
//			if(arr[i]== temp1.store) 
//				temp1.diff=i;
//			if(arr[i]=='R'&& temp1.store=='D' )
//			{
//				if(i-temp1.diff < t)
//					t=i-temp1.diff;
//				temp1.diff=i;
//			}
//			if(arr[i]=='D'&& temp1.store=='R' )
//			{
//				if(i-temp1.diff < t)
//					t=i-temp1.diff;
//				temp1.diff=i;
//			}
//			if(arr[i]!='.')
//				temp1.store=arr[i];
//		}
//		cout<<t<<endl;
//		delete []arr;
//	}
//	return 0;
//}