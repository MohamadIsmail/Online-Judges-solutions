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
//int n,arr[1000004],cum_sum[1000004];	
//int main()
//{
//	//Read();
//	int t; 
//	cin >> t;
//	map<int,int>freq;
//	while (t--)
//	{
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			cum_sum[i]=arr[i]+(i ? cum_sum[i-1]: 0);	
//		}
//		freq.clear();
//		freq[0]=1;
//		int res=0;
//		for (int i = 0; i < n; i++)
//		{
//			if(cum_sum[i] >= 47) 
//				res += freq[cum_sum[i] - 47]; 
//			freq[cum_sum[i]] ++; 
//		}
//		cout << res<< endl;
//	}
//	return 0;
//}