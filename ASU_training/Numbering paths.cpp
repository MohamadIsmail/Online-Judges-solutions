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
//#define vi vector<int>
//typedef pair<int,int> PAIR;
//int m,n,Case=0;
//int graph[31][31];
//
//void floyd()
//{
//	for (int k = 0; k <=n; k++)
//	{
//		for (int i = 0; i <=n; i++)
//		{
//			for (int j = 0; j <=n; j++)
//			{
//				graph[i][j]+=graph[i][k]*graph[k][j];
//			}
//		}
//	}
//	for (int l = 0; l <=n; l++)
//	{
//		if(graph[l][l])
//		{
//			for (int i = 0; i <=n; i++)
//			{
//				for (int j = 0; j <=n; j++)
//				{
//					if(graph[i][l] && graph[l][j])
//						graph[i][j]=-1;
//				}
//			}
//		}
//	}
//}
//int main()
//{	
//	//Read();
//	while (cin >> m)
//	{
//		mem(graph,0);
//		n=0;
//		for (int i = 0; i < m; i++)
//		{
//			int j,k;
//			scanf("%d %d",&j,&k);
//			graph[j][k]=1;
//			n=max(n,j);
//			n=max(n,k);
//		}
//		floyd();
//		printf("matrix for city %d\n",Case++);
//		for (int i = 0; i <=n; i++)
//		{
//			for (int j = 0; j <=n; j++)
//			{
//				printf("%d",graph[i][j]);
//				if(j!=n)
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}