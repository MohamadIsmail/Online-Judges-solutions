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
//#define mod 1000000007 
//bool isgood(int a, int b ,int n){
//	do
//	{
//		if(n%10!=a && n%10!=b)
//			return false;
//		n/=10;
//	} while (n);
//	return true;
//}
//ll choose[1000005];
//
//ll POWER(int b, int p)
//{
//	if(p==0)
//		return 1;
//	if(p==1)
//		return b;
//	ll ret=POWER(b,p/2);
//	ret= (ret *ret)%mod;
//	if(p & 1)
//		return (ret*b)%mod;
//	return ret;
//}
//void generate_choose(int num){
//	choose[0]=1;
//	for (int i = 1; i < num+1; i++)
//	{
//		choose[i]=(((choose[i-1]*(num-i+1))%mod) *POWER(i,mod-2)) %mod;
//	}
//}
//int main()
//{
//	//Read();
//	int n,a,b;
//	while (cin >> a >>b >> n)
//	{
//		generate_choose(n);
//		int ret=0;
//		for (int i = 0; i < n+1; i++)
//		{
//			if(isgood(a,b,i*a+b*(n-i)))
//				ret=(ret+choose[i])%mod;
//		}
//		cout << ret << endl;
//	}
//
//}