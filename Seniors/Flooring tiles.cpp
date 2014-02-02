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
//int primes[]={2,3,5,7,11,13};
//ll dp[7][151],End=7;
//
//ll solve(int index,int reminder)
//{
//	if(reminder==1)
//		return 1;
//	if(index==End)
//		return INF_MAX;
//	ll &ret=dp[index][reminder];
//	if(ret!=-1)
//		return ret;
//	ret=INF_MAX;
//	for (int i = 0; i < reminder; i++)
//	{
//		if(reminder%(i+1)==0){
//			ll newnum=solve(index+1,reminder/(i+1))*powl(primes[index],i);
//			if(newnum > 0)
//				ret=min(ret,newnum);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	//Read();
//	int n;
//	while (cin >>n &&n)
//	{
//		mem(dp,-1);
//		n*=2;
//		ll p1=solve(0,n),p2=solve(0,n-1);
//		cout<<min(p1,p2)<<endl;
//	}
//}