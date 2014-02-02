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
//int n,t,Case=0,m,minTime,dx[]={-1,0,1,0},dy[]={0,-1,0,1};
//bool available[501][501][4];
//
//
//bool checkBoundaries(int i, int j) {
//	if (i < 0 || j < 0 || i == n || j == m)
//		return false;
//	return true;
//}
//
//struct point {
//	int x,y, c;
//	point(){}
//	point (int i, int j, int k) {
//		x = i;
//		y = j;
//		c = k;
//	}
//	bool operator < (const point &n) const {
//        return c > n.c;
//    }
//};
//
//int BFS()
//{
//	bool visited[505][505][4];
//	mem(visited,false);
//	priority_queue<point>PQ;
//	PQ.push(point(0,0,0));
//
//	while (!PQ.empty())
//	{
//		point cur=PQ.top();
//		PQ.pop();
//		if(cur.c > n*m*4)
//			return -1;
//		if(cur.x==n-1 && cur.y==m-1)
//			return cur.c;
//		vector<bool> ng(4, 0);
//        for(int i=0; i<4; ++i)
//			ng[i] = available[cur.x][cur.y][(i+(cur.c % 4))%4];
//		for(int i=0; i<4; ++i){
//			int Y = cur.y + dy[i];
//			int X = cur.x + dx[i];
//			if(checkBoundaries(X, Y) && ng[i] && !visited[X][Y][cur.c%4]){
//				visited[X][Y][cur.c%4] = true;
//
//				PQ.push( point(X, Y, cur.c+1 ) );
//			}
//		}
//	}
//	return -1;
//}
//int main()	
//{
//	//freopen("1.txt","rt",stdin);
//	while (cin>>n>>m)
//	{
//		mem(available,false);
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if(i==n-1 && j==m-1)
//					break;
//				string str;
//				cin>>str;
//				for (int k = 0; k < (int)str.size(); k++)
//				{
//					int index;
//					if(str[k]=='N')
//						index=0;
//					if(str[k]=='W')
//						index=1;
//					if(str[k]=='S')
//						index=2;
//					if(str[k]=='E')
//						index=3;
//					available[i][j][index]=true;
//				}
//			}
//		}
//		int res=BFS();
//		if(res==-1)
//			printf("no path to exit\n");
//		else
//			printf("%d\n",res);
//	}
//	return 0;
//}