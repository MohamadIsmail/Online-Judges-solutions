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
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//#define sz(c) ((int)(c).size())
//#define pb push_back
//#define mp make_pair
//
//int n,m ;
//map<int ,vector<int> >graph;
//bool visited[700];
//bool BFS(int source, int dest)
//{
//	queue<int>q;
//	visited[source]=true;
//	q.push(source);
//	while (!q.empty())
//	{
//		int u=q.front();
//		q.pop();
//		if(u==dest)
//			return true;
//		for (int i = 0; i < graph[u].size(); i++)
//		{
//			int v= graph[u][i];
//			if(v < n && v !=dest)
//				return false;
//			if(!visited[v]){
//				visited[v]=true;
//				q.push(v);
//			}
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	//Read();
//	string str,arr;
//	while(cin>>n && n){
//		map<string, int>ci;
//		graph.clear();
//		for (int i = 0; i < n; i++)
//		{
//			cin >> str;
//			ci[str]=i;
//		}
//		int counter=n,x,y;
//		cin >> m;
//		for (int i = 0; i < m; i++)
//		{
//			cin >> str >> arr;
//			if(ci.find(str)!=ci.end())
//				x=ci[str];
//			else{
//				x=counter++;
//				ci[str]=x;
//			}
//			if(ci.find(arr)!=ci.end())
//				y=ci[arr];
//			else{
//				y=counter++;
//				ci[arr]=y;
//			}
//			graph[x].push_back(y);
//		}
//		bool ok =true;
//		for (int i = 0; i < n-1; i++)
//		{
//			mem(visited,false);
//			if(!BFS(i,i+1) )
//			{
//				ok=false;break;
//			}
//		}
//		if(!ok)
//			printf("The tour cannot be planned with the given flight segments.\n");
//		else
//			printf("The tour can be planned.\n");
//	}
//	return 0;
//}