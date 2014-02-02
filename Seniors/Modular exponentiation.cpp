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
//#define INF 1e+9
//#define ll long long
//
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//#define sz(c) ((int)(c).size())
//#define pb push_back
//#define mp make_pair
//#define vi vector<int>
//int countBits(long long mask) {int res = 0; while(mask) mask &= (mask - 1), ++ res; return res;}
//
//int main(){
//	Read();
//	unsigned long long x,m;
//	long long e;
//	int T,K=1;
//	cin >> T;
//	while(T--){
//		cin >> x >> e >> m;
//		vector<long> V;
//		while(e!=1){
//			if(e%2){V.push_back(x%m);}
//			e/=2;
//			x%=m;
//			x*=x;
//			x%=m;
//		}
//		int N=V.size();
//		for(int Q=0;Q<N;Q++){
//			x*=V[Q];
//			x%=m;
//		}
//		x%=m;
//		cout << K << ". " << x << endl;
//		K++;
//	}
//	return 0;
//}