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
//#include <cctype>
//#include <string.h>
//using namespace std;
//
//#define INF_MAX 1000000000000000000 
//#define INF_MIN -INF_MAX
//
//#define pi acos(-1.0)
//#define INF 1000000000
//#define ll long long
//
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen("2.txt", "w", stdout)
//#define sz(c) ((int)(c).size())
//#define pb push_back
//#define mp make_pair
//#define all(v) v.begin(),v.end()
//#define vi vector<int>
//typedef pair<int,int> PAIR;
//typedef pair<PAIR ,int> PAIR2;
//typedef unsigned long long ull;
//typedef long double lld;
//string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//
//int dp[5004][5004];
//int main()
//{
//	//Read();
//	int n;
//	while (cin >> n)
//	{
//		int vec[5005];
//		for(int i = 1; i <= n; i++) {
//			scanf("%d", &vec[i]);
//		}
//
//		for(int i = 0; i <= n; i++) {
//			for(int j = 0; j <= n; j++) {
//				dp[i][j] = INF;
//			}
//		}
//		dp[0][0] = 0;
//
//		for(int i = 1; i <= n; i++) {
//			int k = -1, s = 0;
//			for(int j = i; j <= n; j++) {
//				s += vec[j];
//				while(k+1<=n && dp[i-1][k+1] <= s) {
//					k++;
//				}
//
//				if(k>=0 && dp[j][k+1]>s) {
//					dp[j][k+1]=s;
//				}
//			}
//
//			for(int k = n-1; k >= 0; k--) {
//				if(dp[i][k]>dp[i][k+1]) {
//					dp[i][k]=dp[i][k+1];
//				}
//			}
//		}	
//		int res = INF;
//		for(int k = 1; k <= n; k++) {
//			if(dp[n][k] < INF) {
//				res = k;
//			}
//		}
//		cout<< n-res << endl;
//	}
//}