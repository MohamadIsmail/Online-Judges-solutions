//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstring>
//#include <string>
//using namespace std;
//
//long long dp[61][61] ;
//string str;
//long long ways(int i, int j)
//{
//	if(i==j)
//		return 1;
//	if(i+1==j)
//		return 2 + (str[i]==str[j]);
//	long long &res=dp[i][j];
//	if(res != -1)
//		return res;
//	res=0;
//	if(str[i]==str[j])
//		res+=ways(i+1,j-1)+1;
//	res+=ways(i+1,j);
//	res+=ways(i,j-1);
//	res-= ways(i+1,j-1);
//	return res;
//}
//
//int main()
//{
//	freopen("1.txt","r",stdin);
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		memset(dp,-1,sizeof(dp));
//		cin >> str;
//		cout << ways(0,str.size()-1)<< endl;
//	}
//	return 0;
//}