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
//string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//#define mod 1000000007 
//
//
//
//vector<string>graph;
//int visited[210];
//struct node{
//	string str;
//	int cost;
//	node(string a,int c):str(a),cost(c){}
//	node(){}
//};
//
//queue<node>q;
//
//bool CharDiff(string a,string b)
//{
//	if(a.size()!=b.size())
//		return false;
//	int c=0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if(a[i]!=b[i])
//			c++;
//		if(c> 1)
//			return false;
//	}
//	return true;
//}
//void Qpush(node tmp)
//{
//	for (int i = 0; i < graph.size(); i++)
//	{
//		if(!visited[i])
//		{
//			if(CharDiff(graph[i],tmp.str))
//			{
//				visited[i]=true;
//				q.push(node(graph[i],tmp.cost+1));
//				visited[i]=true;
//			}
//		}
//	}
//}
//
//int bfs(string x, string y)
//{
//	while ( !q.empty() ) q.pop();
//	mem(visited,false);
//	q.push(node(x,0));
//	while (!q.empty())
//	{
//		node t=q.front();
//		q.pop();
//		if(t.str==y)
//			return t.cost;
//		Qpush(t);
//	}
//	return 0;
//}
//int main()
//{
//	//Read();
//	int t;
//	cin >> t;
//	bool ok=false;
//	getchar();getchar();
//	while (t--)
//	{
//		string str;
//		char arr[102];
//		graph.clear();
//		while (cin >> str && str!="*")
//		{
//			graph.pb(str);
//		}
//		if(ok)printf("\n");
//		ok=true;
//		cin.ignore();
//		while (gets(arr) && strlen(arr))
//		{
//			string x,y;
//			char *p=strtok(arr," ");
//			x=p;
//			p=strtok(NULL," ");
//			y=p;
//			cout << x << " "<< y ;
//			printf(" %d\n",bfs(x,y));
//		}
//	}
//	return 0;
//}