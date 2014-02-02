//#include<iostream>
//#include<cmath>
//#include<cstring>
//#include<limits.h>
//using namespace std;
//
//int Cost[4097];
//char arr[12];
//
//int solve (int mask)
//{
//	if(Cost[mask]!=-1)
//		return Cost[mask];
//	if(mask==12 || arr[mask]=='o')
//		return Cost[mask]=0;
//	int first ,MIN;
//	for(int move=mask; move<12; move++)
//	{
//
//		MIN= (first < MIN)? first: MIN;
//	}
//	return Cost[mask]=MIN;
//}
//  
//int main()
//{
//	int length,size,test;
//	cin>>test;
//	while(test--)
//	{
//		memset(Cost,-1,sizeof(Cost));
//		for(int i=0; i<12; i++)
//			cin>>arr[i];
//		cout<<"The minimum cutting is "<<solve(0)<<".\n";
//	}
//	return 0;
//}