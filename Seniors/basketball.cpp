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
//#define all(v) v.begin(),v.end()
//#define vi vector<int>
//typedef pair<int,int> PAIR;
//typedef pair<PAIR ,int> PAIR2;
//string tostring(int n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//
//int departs[1006];
//long double choose(int n, int k)
//{
//	if(k>n)
//		return 0;
//	k=min(k,n-k);
//	long double res=1;
//	for (int i = n; i >=n-k+1 ; i--)
//	{
//		res*=(long double)i;
//		res/=(long double)(n-i+1);
//	}
//	return res;
//}
//
//int main()
//{
//	//Read();
//	int n,m,h;
//	while (cin >> n >>m >>h){
//		int sum=0,waffa;
//		for (int i = 1; i <= m; i++)
//		{
//			cin >>departs[i];
//			if(i==h)
//				waffa=departs[i];
//			else 
//				sum+=departs[i];
//		}
//		if(sum+waffa <n)
//		{
//			cout<<"-1.0\n";
//			continue;
//		}
//		long double ans;
//		ans=choose(sum,n-1);
//		ans/=choose(sum+waffa-1,n-1);
//		ans=1.0-ans;
//		cout << setprecision(6)<<fixed <<ans<< endl;
//	}
//}