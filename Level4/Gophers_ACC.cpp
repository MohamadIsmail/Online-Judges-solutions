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
//#define N 1000000
//#define LL long long
//
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write(w) freopen(w, "w", stdout)
//
//const int MX = 105;
//int Right[MX],Left[MX],numR;
//bool visited[MX];
//vector<vector<int> >Graph;
//
//pair<double,double> first[MX],second[MX];
//
//
//bool match(int i) {
//	Fors(j,Graph[i]) {
//		if (visited[Graph[i][j]])
//			continue;
//		visited[Graph[i][j]] = 1;
//		if (Left[Graph[i][j]] == -1 || match(Left[Graph[i][j]])) {
//			Left[Graph[i][j]] = i;
//			Right[i] = Graph[i][j];
//			return true;
//		}
//	}
//	return false;
//}
//
//int runMatching() {
//	int cc = 0;
//	mem(Right, -1);
//	mem(Left, -1);
//	For(i,0,numR) {
//		mem(visited,0);
//		if (match(i))
//			cc++;
//	}
//	return cc;
//}
//
//int main()
//{
//	//Read();
//	int m;
//	double time,velocity;
//	while (scanf("%d %d %lf %lf",&numR,&m,&velocity, &time)!=EOF)
//	{
//		Graph.clear();
//		Graph.resize(numR);
//		For (i,0,numR)
//		{
//			scanf("%lf %lf",&first[i].first ,&first[i].second);
//		}
//		For(i,0,m)
//		{
//			scanf("%lf %lf",&second[i].first, &second[i].second);
//		}
//		For(i,0,numR)
//		{
//			For(j,0,m){
//				double dst = hypot(first[i].first-second[j].first,first[i].second-second[j].second);
//				if((dst/velocity) < (double)time)
//					Graph[i].push_back(j);
//			}
//		}	
//		printf("%d\n",numR-runMatching());
//	}
//	return 0;
//}