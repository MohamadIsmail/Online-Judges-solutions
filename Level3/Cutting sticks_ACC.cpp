//#include<iostream>
//#include<cmath>
//#include<cstring>
//#include<limits.h>
//using namespace std;
//
//int arr[53],Cost[52][52];
//
//int solve (int start, int end )
//{
//	int MIN=INT_MAX;
//	if(Cost[start][end]!=-1)
//		return Cost[start][end];
//	if(start>=end || end-start ==1)
//		return Cost[start][end]=0;
//	int first ;
//	for(int cut=start+1; cut<end; cut++)
//	{
//		Cost[start][end]=first=solve(start, cut) + solve(cut, end) + arr[end] - arr[start];
//		MIN= (first < MIN)? first: MIN;
//	}
//	return Cost[start][end]=MIN;
//}
//  
//int main()
//{
//	int length,size;
//	while(cin>>length && length)
//	{
//		memset(Cost,-1,sizeof(Cost));
//		cin>>size;
//		arr[0]=0;
//		for(int i=1; i<=size; i++)
//			cin>>arr[i];
//		arr[size+1]=length;
//		cout<<"The minimum cutting is "<<solve(0,size+1)<<".\n";
//	}
//	return 0;
//}