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
//typedef unsigned long long ull;
//typedef long double lld;
//string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//
//int n,m,dx[]={0,0,1,-1},dy[]={1,-1,0,0};
//
//struct state{
//	int i, j, mask, steps;
//	state(){}
//	state(int i, int j, int mask = 0, int steps = 0): i(i), j(j), mask(mask), steps(steps) {
//	}
//	bool operator ==(state &other) const{
//		return other.i == i && other.j == j;
//	}
//};
//bool visited[50][50][1 << 10];
//bool get(state s) {
//	return visited[s.i][s.j][s.mask];
//}
//void Set(state s) {
//	visited[s.i][s.j][s.mask] = true;
//}
//char grid[50][50];
//bool valid(state s) {
//	return s.i >= 0 && s.j >= 0 && s.i < n && s.j < m && grid[s.i][s.j] != '#';
//}
//int BFS(state start, state destination) {
//	queue<state> q;
//	mem(visited, false);
//	q.push(start);
//	Set(start);
//	while(!q.empty()) {
//		state curr = q.front();
//		q.pop();
//		if(curr == destination)
//			return curr.steps;
//		For(k, 0, 4) {
//			state nxt(curr.i + dx[k], curr.j + dy[k], curr.mask, curr.steps + 1);
//			if(valid(nxt)) {
//				if(islower(grid[nxt.i][nxt.j]))
//					nxt.mask ^= 1 << (grid[nxt.i][nxt.j] - 'a');
//				else if(isupper(grid[nxt.i][nxt.j]) && (nxt.mask & (1 << (grid[nxt.i][nxt.j] - 'A'))) == 0)
//					continue;
//				if(!get(nxt)) {
//					Set(nxt);
//					q.push(nxt);
//				}
//			}
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	Read();
//	int t;
//	cin >>t;
//	for (int l = 1; l <= t; l++)
//	{
//		scanf("%d %d",&n,&m );
//		string str;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s",grid[i]);
//		}
//		printf("Case %d: ",l);
//		state x,y;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if(grid[i][j]=='*')
//					x=state(i,j);
//				if(grid[i][j]=='$')
//					y=state(i,j);
//				
//			}
//		}
//		int res=BFS(x,y);
//		if(res >=0)
//			printf("%d\n",res);
//		else
//			printf("-1\n");
//	}
//	return 0;
//}