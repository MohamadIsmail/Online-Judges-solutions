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
//typedef vector<int> vi;
//
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//
//#define pi acos(-1.0)
//#define N 1000000
//#define LL long long 
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//
//int V,t,Case=0;
//
//int graph[102][102];
//bool visited [101],firstvisited[102],out[102][102];
//
//
//void dfs (int at, int absent)
//{
//    if ( at == absent ) return;
// 
//    visited [at] = true;
// 
//    for ( int i = 0; i < V; i++ ) {
//		if ( graph [at] [i] && !visited [i] ) dfs (i, absent);
//    }
//}
//
//void print()
//{
//	printf("+");
//	for (int i = 0; i < V*2-1; i++)
//	{
//		printf("-");
//	}
//	printf("+\n");
//}
//int main()
//{
//	//freopen("1.txt","rt",stdin);
//	scanf("%d",&t);
//	while (t--)
//	{
//		scanf("%d",&V);
//		mem(visited,false);
//		mem(firstvisited,false);
//		for (int i = 0; i < V; i++) {
//			for (int j = 0; j < V; j++) {
//				scanf("%d", &graph[i][j]);
//			}
//		}
//		dfs(0,-1);
//		for (int i = 0; i < 102; i++)
//		{
//			firstvisited[i]=visited[i];
//		}
//		for (int i = 0; i < V; i++)
//		{
//			mem(visited,false);
//			dfs(0,i);
//			for (int j = 0; j < V; j++)
//			{
//				if(firstvisited[j] && !visited[j])
//					out[i][j]=true;
//				else
//					out[i][j]=false;
//			}
//			out[i][i]=firstvisited[i];
//		}
//		printf("Case %d:\n",++Case);
//		print();
//		for (int i = 0; i < V; i++)
//		{
//			printf("|");
//			for (int j = 0; j < V; j++)
//			{
//				if(out[i][j])
//					printf("Y|");
//				else
//					printf("N|");
//			}
//			printf("\n");
//			print();
//		}
//	}
//	return 0;
//}