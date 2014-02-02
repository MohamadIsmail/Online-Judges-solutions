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
//#define Fore(it, x) for( it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//#define sz(c) ((int)(c).size())
//#define pb push_back
//#define mp make_pair
//#define vi vector<int>
//int countBits(long long mask) {int res = 0; while(mask) mask &= (mask - 1), ++ res; return res;}
//
//
//struct color{
//	bool row;
//	int index,freq;
//};
//
//int main()
//{
//	Read();
//	int arr[101][101],freq[10000];
//	int n,m,maxcol,maxfrq;
//	color colors[10001];
//	while (cin>>n >> m && (n||m))
//	{
//		maxcol=maxfrq=0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				cin >> arr[i][j];
//				maxcol=max(arr[i][j],maxcol);
//				colors[arr[i][j]].freq=0;
//
//			}
//		}
//		vector<vector<int> >mymap;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if(colors[arr[i][j]].freq==0)
//				{
//					for (int k = j+1; k < m; k++)
//					{
//						if(arr[i][k]==arr[i][j])
//						{
//							colors[arr[i][j]].row=true;
//							colors[arr[i][j]].index=i;
//							break;
//						}
//					}
//
//					for (int k = i+1; k < n; k++)
//					{
//						if(arr[k][j]==arr[i][j])
//						{
//							colors[arr[i][j]].row=false;
//							colors[arr[i][j]].index=j;
//							break;
//						}
//					}
//				}
//				colors[arr[i][j]].freq++;
//				maxfrq=max(maxfrq,colors[arr[i][j]].freq);
//			}
//		}
//
//		mymap.resize(maxfrq);
//		for (int i = 1; i <= maxcol; i++)
//		{
//			mymap[colors[i].freq].push_back(i);
//		}
//		stack<int>st;
//		for (int i = mymap.size()-1; i >=0 ; i--)
//		{
//			if(!mymap[i].size())
//				continue;
//			if(mymap[i].size()==1)
//			{
//				st.push(mymap[i][0]);
//			}
//			else
//			{
//				for (int j = 0; j < mymap[i].size(); j++)
//				{
//
//				}
//			}
//		}
//	}
//}