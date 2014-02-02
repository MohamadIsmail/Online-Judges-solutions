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
//	int n,val1,val2;
//	while (cin >>n)
//	{
//		vi first,second,third,fourth;
//		for (int i = 0; i < 5*n; i++)
//		{
//			cin >> val1 >> val2;
//			if(val1%2 && val2%2)
//				first.pb(i+1);
//			else if(val1%2)
//				second.pb(i+1);
//			else if(val2%2)
//				third.pb(i+1);
//			else
//				fourth.pb(i+1);
//		}
//		printf("OK\n");
//		if(first.size()>=n)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				printf("%d",first[i]);
//				if(i!=n-1)
//					printf(" ");
//			}
//			printf("\n");
//		}
//		else if(second.size()>=n)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				printf("%d",second[i]);
//				if(i!=n-1)
//					printf(" ");
//			}
//			printf("\n");
//		}
//		else if(third.size()>=n)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				printf("%d",third[i]);
//				if(i!=n-1)
//					printf(" ");
//			}
//			printf("\n");
//		}
//		else
//		{
//			for (int i = 0; i < n; i++)
//			{
//				printf("%d",fourth[i]);
//				if(i!=n-1)
//					printf(" ");
//			}
//			printf("\n");
//		}
//
//	}
//}