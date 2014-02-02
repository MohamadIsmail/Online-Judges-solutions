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
//#define vi vector<int>
//int countBits(long long mask) {int res = 0; while(mask) mask &= (mask - 1), ++ res; return res;}
//
//map<string ,bool>vis;
//map<string,int>dist;
//map<string,pair<string,char> >p;
//bool bfs(string init,string target)
//{
//	vis.clear();
//	dist.clear();
//	p.clear();
//	queue<string>q;
//	q.push(init);
//	vis[init]=true;
//	while (!q.empty())
//	{
//		string cur=q.front();
//		q.pop();
//		if(cur==target)
//			return true;
//		int curDist = dist[cur]; 
//        int src = find(cur.begin(), cur.end(), 'G') - cur.begin(); 
//        if (src == 6 || src == 4 || src == 1) { 
//            string adj = cur; 
//            if (src == 6 || src == 1) { 
//                swap(adj[6], adj[1]); 
//                if (!vis[adj]) { 
//                    dist[adj] = curDist + 1; 
//                    vis[adj] = true; 
//                    q.push(adj); 
//                    p[adj] = make_pair(cur, adj[src]); 
//                } 
//            } 
//            if (src == 6 || src == 4) { 
//                adj = cur; 
//                swap(adj[6], adj[4]); 
//                if (!vis[adj]) { 
//                    dist[adj] = curDist + 1; 
//                    vis[adj] = true; 
//                    q.push(adj); 
//                    p[adj] = make_pair(cur, adj[src]); 
//                } 
//            } 
//        } 
//        if (src != 6) { 
//            string adj = cur; 
//            swap(adj[src], adj[(src + 1) % 6]); 
//            if (!vis[adj]) { 
//                dist[adj] = curDist + 1; 
//                vis[adj] = true; 
//                q.push(adj); 
//                p[adj] = make_pair(cur, adj[src]); 
//            } 
//            adj = cur; 
//            swap(adj[src], adj[(src - 1 + 6) % 6]); 
//            if (!vis[adj]) { 
//                dist[adj] = curDist + 1; 
//                vis[adj] = true; 
//                q.push(adj); 
//                p[adj] = make_pair(cur, adj[src]); 
//            } 
//        } 
//	}
//	return false;
//}
//void print(string cur ,string init){
//	if(cur==init)
//		return ;
//	pair<string,char>m=p[cur];
//	print(m.first,init);
//	cout << m.second;
//}
//
//int main()
//{
//	//Read();
//	int t; 
//	cin >> t;
//	while (t--)
//	{
//		int test;
//		string str;
//		cin >>test>> str;
//		cout << test <<" ";
//		if(bfs(str+'G',"ABCDEFG"))
//		{
//			cout <<dist["ABCDEFG"]<<" ";
//			print("ABCDEFG",str+'G');
//			cout << endl;
//		}
//		else
//			cout << "NO SOLUTION\n";
//	}
//	return 0;
//}
