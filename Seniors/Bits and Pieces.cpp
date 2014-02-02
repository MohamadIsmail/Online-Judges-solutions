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
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//
//#define pi acos(-1.0)
//#define INF 1e9
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
//typedef pair<int,int> PAIR;
//typedef pair<PAIR ,int> PAIR2;
//typedef unsigned long long ull;
//typedef long double lld;
//string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//
//typedef long long lint;
//typedef unsigned long long ulint;
//typedef long double ldouble;
//
//using namespace std;
//
//pair <lint, lint> find( lint c, lint d )
//{
//	lint a=0, b=0, bit_c, bit_d;
//	bool fbit=true;
//	int i;
//	for (i=31 ; i>=0 ; i--)
//	{
//		if ((1<<i)&c) bit_c = 1;
//		else bit_c = 0;
//
//		if ((1<<i)&d) bit_d = 1;
//		else bit_d = 0;
//
//		if (bit_c == 1 && bit_d == 1)
//		{
//			a = a | (1<<i);
//			b = b | (1<<i);
//		} else if (bit_c == 0 && bit_d == 1)
//		{
//			if (fbit == true)
//			{
//				b = b | (1<<i);
//			} else
//			{
//				a = a | (1<<i);
//			}
//			fbit = false;
//		}
//	}
//	if ( (a&b) == c && (a|b) == d ) return make_pair(a,b);
//	else return make_pair(-1,-1);
//}
//
//int main()
//{
//	int kase=1, kounter=1;/**/
//	lint c, d;
//	scanf("%d",&kase);
//	while (kase--)
//	{
//		cin >> c >> d;
//		pair <lint, lint> res = find(c,d);
//		if (res.first == -1) printf("-1\n");
//		else cout << res.first << " " << res.second << endl;
//	}
//	return 0;
//}