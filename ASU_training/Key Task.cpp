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
//#define vi vector<int>
//typedef pair<int,int> PAIR;
//typedef pair<PAIR ,int> PAIR2;
//char graph [101][101];
//int dist[101][101][16];
//int n,m,dx[]={0,0,1,-1},dy[]={1,-1,0,0};
//
//char place;
//bool checkBoundaries(int i, int j) {
//
//	if (i < 0 || j < 0 || i >= n || j >= m)
//		return false;
//	return true;
//}
//
//int bfs(PAIR source)
//{
//	queue <PAIR2> q;
//	q.push(PAIR2(source,0));
//	dist[source.first][source.second][0]=0;
//	while (!q.empty())
//	{
//		PAIR u;
//		u=q.front().first;
//		int masku=q.front().second,maskv ,x ,y;
//		q.pop();
//		for (int i = 0; i < 4; i++)
//		{			
//			x=u.first+dx[i],y=u.second+dy[i];
//			if(checkBoundaries(x,y) && graph[x][y]!='#')
//			{
//				if(	graph[x][y]=='X')
//					return dist[u.first][u.second][masku];
//				if(dist[x][y][masku]==-1){
//					maskv=masku;
//					if(islower(graph[x][y])){
//						if(graph[x][y]=='b')
//							maskv |=1;
//						if(graph[x][y]=='g')
//							maskv |=2;
//						if(graph[x][y]=='r')
//							maskv |=4;
//						if(graph[x][y]=='y')
//							maskv |=8;
//						q.push((PAIR2(mp(x,y),maskv)));
//						dist[x][y][maskv]=dist[x][y][masku]=dist[u.first][u.second][masku]+1;
//					}
//					else if(isupper(graph[x][y])){
//						if(graph[x][y]=='B'){
//							if(masku & 1)
//								q.push(PAIR2(mp(x,y),masku));
//						}
//						if(graph[x][y]=='G'){
//							if(masku & 2)
//								q.push(PAIR2(mp(x,y),masku));
//						}
//						if(graph[x][y]=='R'){
//							if(masku & 4)
//								q.push(PAIR2(mp(x,y),masku));
//						}
//						if(graph[x][y]=='Y'){
//							if(masku & 8)
//								q.push(PAIR2(mp(x,y),masku));
//						}
//						dist[x][y][masku]=dist[u.first][u.second][masku]+1;
//					}
//					else{
//						q.push(PAIR2(mp(x,y),masku));
//						dist[x][y][masku]=dist[u.first][u.second][masku]+1;
//					}
//				}
//			}
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//Read();
//
//	while (scanf("%d %d",&n,&m )&& (n||m))
//	{
//		string str;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s",graph[i]);
//		}
//		int x,y;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if(graph[i][j]=='*')
//					x=i,y=j;
//				mem(dist[i][j],-1);
//			}
//		}
//		int res=bfs(mp(x,y));
//		if(res >=0)
//			printf("Escape possible in %d steps.\n",res+1);
//		else
//			printf("The poor student is trapped!\n");
//	}
//	return 0;
//}
