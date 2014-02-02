//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//int DP[14] ;
//
//int solve(int n)
//{
//	if(DP[n]!= -1)
//		return DP[n];
//	if(n ==0 || n ==1 )
//		return DP[n]=1;
//	if(n ==2 )
//		return DP[n]=2;
//	int result=0;
//	for (int i = 1; i <= n; i++)
//	{
//		int x=solve(n-i);
//		result+=solve(i-1)*x;
//	}
//	return DP[n]=result;
//}
//
//int main()
//{
//	int n,f=0;
//	memset(DP,-1,sizeof(DP));
//	while(cin>>n)
//	{
//		if(f)
//			cout<<endl;
//		f++;
//		cout<<solve(n)<<endl;
//	}
//	return 0;
//}