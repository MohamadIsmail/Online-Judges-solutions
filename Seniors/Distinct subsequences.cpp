//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <queue>
//#include <assert.h>
//#include <string.h>
//using namespace std;
//
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//
//#define pi acos(-1.0)
//#define N 1000000
//#define ll long long
//
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//#define MOD 1000000007
//long long dp [100002];
//int ocur[26];
//int main()
//{
//	//Read();
//	int t,n;
//	cin>>t;
//	cin.ignore();
//	while(t--){
//		string str;
//		getline(cin,str);
//		n=str.size();
//		mem(dp,-1);
//		mem(ocur,-1);
//		dp[0]=1;
//		for (int i = 1; i <= n; i++)
//		{
//			dp[i]=((dp[i-1]%MOD) *2 ) % MOD;
//			if(ocur[str[i-1]-'A']!= -1 )
//				dp[i] = (dp [i] - dp[ocur[str[i-1]-'A']-1]+ MOD ) % MOD;
//			ocur[str[i-1]-'A'] = i;
//		}
//		cout<<dp[n]<<endl;
//	}
//	return 0;
//}