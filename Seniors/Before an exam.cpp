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
//
//int main()
//{
//	int d,sumtime;
//	int maxTime[31],minTime[31],schedule[31],minsum,maxsum;
//	while (cin >> d >>sumtime)
//	{
//		minsum=maxsum=0;
//		for (int i = 0; i < d; i++)
//		{
//			cin >>minTime[i]>> maxTime[i];
//			minsum+=minTime[i];
//			maxsum+=maxTime[i];
//		}
//		
//		if(minsum > sumtime || maxsum < sumtime)
//		{
//			printf("NO\n");
//			continue;
//		}
//		printf("YES\n");
//		int temp=sumtime-minsum;
//		for (int i = 0; i < d; i++)
//		{
//			if(i >0)
//				printf(" ");
//			int Min=min(maxTime[i]-minTime[i], temp);
//			cout << minTime [i] +Min;
//			temp-=Min;
//		}
//		printf("\n");
//	}
//}