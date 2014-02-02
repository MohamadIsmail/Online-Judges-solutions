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
//int n,t,Case=0,m,minTime,dx[]={-1,0,1,0},dy[]={0,1,0,-1};
//int joCost[1005][1005],fireCost[1005][1005];
//char graph[1005][1005];
//
//
//bool checkBoundaries(int i, int j) {
//	if (i < 0 || j < 0 || i == n || j == m)
//		return false;
//	return true;
//}
//
//struct point {
//	int x;
//	int y;
//	int c;
//	point (int i, int j, int k):x(i),y(j),c(k) {}
//	point(){}
//}a;
//
//void joBfs(int row, int col)
//{
//	queue<point>q;
//	joCost [row] [col] = 0;
//	q.push(point (row, col, 0));
//
//	while( !q.empty() ) {
//		a = q.front(); q.pop();
//
//		for ( int i = 0; i < 4; i++ ) {
//			int x = a.x + dx [i];
//			int y = a.y + dy [i];
//			if ( checkBoundaries(x,y)&& graph [x] [y] != '#' && joCost[x][y]==INF_MAX ) {
//				joCost [x][y] = a.c + 1;
//				q.push(point (x, y, a.c + 1));
//			}   
//		}
//	}
//}
//
//void FireBfs()
//{
//	queue<point>q;
//	for ( int i = 0; i < n; i++ ) {
//		for ( int j = 0; j < m; j++ ) {
//			if ( graph [i] [j] == 'F' ) {
//				fireCost [i] [j] = 0;
//				q.push(point (i, j, 0));
//			}
//		}
//	}
//	while( !q.empty() ) {
//		a = q.front(); q.pop();
//
//		for ( int i = 0; i < 4; i++ ) {
//			int x = a.x + dx [i];
//			int y = a.y + dy [i];
//			if ( checkBoundaries(x,y)&& graph [x] [y] != '#' && fireCost[x][y]> a.c + 1 ) {
//				fireCost [x][y] = a.c + 1;
//				q.push(point (x, y, a.c + 1));
//			}   
//		}
//	}
//}
//int main()
//{
//	//freopen("1.txt","rt",stdin);
//	scanf("%d",&t);
//	while (t--)
//	{
//		scanf("%d %d",&n,&m);
//		for (int i = 0; i < n; i++)
//		{
//			string str;
//			scanf("%s",graph[i]);
//		}
//		for (int i = 0; i < 1005; i++)
//		{
//			for (int j = 0; j < 1005; j++)
//			{
//				joCost[i][j]=fireCost[i][j]=INF_MAX;
//			}
//		}
//		for ( int i = 0; i < n; i++ ) {
//			for ( int j = 0; j < m; j++ ) {
//				if ( graph [i] [j] == 'J' ) {
//					joBfs (i, j);
//					i = n;
//					break;
//				}
//			}
//		}
//		FireBfs ();
//		minTime=INF_MAX;
//		for (int i = 0; i < m; i++)
//		{
//			if(fireCost[0][i] >joCost[0][i])
//				minTime=min(minTime,joCost[0][i]);
//			if(fireCost[n-1][i] > joCost[n-1][i])
//				minTime=min(minTime,joCost[n-1][i]);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if(fireCost[i][0] >joCost[i][0])
//				minTime=min(minTime,joCost[i][0]);
//			if(fireCost[i][m-1] > joCost[i][m-1])
//				minTime=min(minTime,joCost[i][m-1]);
//		}
//		if(minTime==INF_MAX)
//			printf("IMPOSSIBLE\n");
//		else
//			printf("%d\n",minTime+1);
//	}
//	return 0;
//}