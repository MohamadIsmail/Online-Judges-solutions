//#include<iostream>
//#include<string>
//#include<cmath>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int nums[1000],DP[102][50002],total, n,avg,t;
//int solve(int index, int sum)
//{
//	if(DP[index][sum]!=-1)
//		return DP[index][sum];
//	if(index == n )
//		return DP[index][sum]=sum;
//	if(sum>avg)
//		return DP[index][sum]=0;
//	if(sum+nums[index] <= avg)
//		return DP[index][sum]=max(solve(index+1,sum+nums[index]),solve(index+1,sum));
//	else
//		return DP[index][sum]=solve(index+1,sum);
//}
//
//int main()
//{
//	cin>>t;
//	while (t--)
//	{
//		memset(DP,-1,sizeof(DP));
//		cin>>n;
//		total=0;
//		for(int i=0; i<n; i++)
//		{
//			cin>>nums[i];
//			total+=nums[i];
//		}
//		avg=total/2;
//		int x=solve(0,0),y;
//		y=total-x;
//		cout<<(avg-x)+(y-avg)<<endl;
//	}
//	return 0;
//}