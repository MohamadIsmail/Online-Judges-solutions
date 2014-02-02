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
//#include <complex>
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
//
//struct state 
//{
//	int mask,steps;
//	state(){}
//	state(int x,int y): mask(x),steps(y){}
//};
//
//int sw[105],n,m;
//bool visited[1 << 15];
//void bfs()
//{
//	queue<state>q;
//	mem(visited,false);
//	q.push(state((1 << n) -1,0));
//	visited[(1 << n)-1]=true;
//	while (!q.empty())
//	{
//		state u=q.front();
//		q.pop();
//		if(u.mask==0){
//			cout << u.steps << endl;
//			return ;
//		}
//		for (int i = 0; i < m; i++)
//		{
//			state v(u.mask ^ sw[i],u.steps+1);
//			if(!visited[v.mask])
//			{
//				visited[v.mask]=true;
//				q.push(v);
//			}
//		}
//	}
//	cout << "IMPOSSIBLE\n";
//}
//int main()
//{
//	//Read();
//	int t,Case=0;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >>m;
//		mem(sw,0);
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				int val;cin >> val;
//				sw[i]|= (1 <<j)*val;
//			}
//		}
//		cout << "Case "<<++Case << ": ";
//		bfs();
//	}
//	return 0;
//}