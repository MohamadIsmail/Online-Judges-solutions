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
//#define INF 1e9
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
//
//int main()
//{
//	//Read();
//	int n,m,k,val;
//	vi arr,arr2; 
//	cin >> n >> m >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> val;
//		arr.pb(val);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> val;
//		arr2.pb(val);
//	}
//	sort(arr.rbegin(),arr.rend());
//	sort(arr2.rbegin(),arr2.rend());
//	bool ok=false;
//	if(n >m)
//	{
//		ok=true;
//	}
//	for (int i = 0; i < min(n,m); i++)
//	{
//		if(arr[i]> arr2[i])
//			ok=true;
//	}
//	if(ok)cout<<"YES\n";
//	else
//		cout<<"NO\n";
//}