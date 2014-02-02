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
//#define Fore(it, x) for(/*typeof (x.begin())*/ it = x.begin(); it != x.end (); it++)
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
//
//bool lucky(int num)
//{
//	while (num)
//	{
//		if(num%10!=7 && num%10!=4)
//			return false;
//		num/=10;
//	}
//	return true;
//}
//vector<ll>lucky_nums;
//map<PAIR,int>dp;
//ll choose[100005];
//int other;
//ll solve(int index,int k)
//{
//	if(k<0)
//		return 0;
//	if(index==lucky_nums.size())
//		return choose[k];
//	if(dp.count(mp(index,k)))
//		return dp[mp(index,k)];	
//	return dp[mp(index,k)]=(solve(index+1,k) + ((lucky_nums[index] * solve(index+1,k-1 ))%mod ))%mod;
//}
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
//		if(i> other)
//			choose[i]=0;
//		else
//			choose[i]=(((choose[i-1]*(other-i+1))%mod) *POWER(i,mod-2)) %mod;
//		assert(choose[i]>=0);
//	}
//}
//int main()
//{
//	//Read();
//	int n,k,val;
//	while (cin >> n >>k)
//	{
//		other=0;lucky_nums.clear();
//		map<int,int>rep;
//		map<int,int>::iterator it;
//		for (int i = 0; i < n; i++)
//		{
//			cin >>val;
//			if(lucky(val))
//				rep[val]++;
//			else
//				other++;
//		}
//		Fore(it,rep)
//		{
//			lucky_nums.pb(it->second);
//		}
//		generate_choose(k);
//		dp.clear();
//		cout<< solve(0,k)<<endl;
//	}
//}