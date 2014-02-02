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
//
//
//
//int main()
//{
//	//Read();
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n,val,m;
//		cin >> n;
//		multiset<int>arr;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> val,arr.insert(val);
//		}
//		multiset<int>::iterator it=arr.begin();
//		for (int i = 0; i < (n-1)/2; i++)
//		{
//			it++;
//		}
//		cin >>m;
//		string op;
//		for (int i = 0; i < m; i++)
//		{
//			cin >> op;
//			if(op=="mid")
//				cout << *it<< endl;
//			else
//			{
//				cin >> val;
//				arr.insert(val);
//				if(val<*it){
//					if(arr.size()%2==0)
//						it--;
//				}
//				else{
//					if(arr.size()%2==1)
//						it++;
//				}
//			}
//		}
//	}
//	return 0;
//}