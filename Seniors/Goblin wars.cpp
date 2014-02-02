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
//
//int n,m,dx[]={0,0,1,-1},dy[]={1,-1,0,0};
//char arr[505][505], vec[505][505];
//bool check(int i, int j)
//{
//	if(i<0 || j<0 || i>=n || j>=m || arr[i][j]!='.')
//		return false;
//	return true;
//}
//
//struct p{
//	int x,y;
//	char ch;
//	p(){}
//	p(int i,int j ,char c):x(i),y(j),ch(c){}
//};
//
//void bfs()
//{
//	queue<p>q;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if(isalpha(arr[i][j]))
//				q.push(p(i,j,arr[i][j]));
//		}
//	}
//	 while(int levelSize = q.size()) { 
//        mem(vec, '.'); 
//        while(levelSize --) { 
//            p cur = q.front(); q.pop(); 
//            for(int k=0;k< 4;k++) { 
//                p nxt(cur.x + dx[k], cur.y + dy[k], cur.ch); 
//				if(check(nxt.x, nxt.y)) { 
//                    if(vec[nxt.x ][nxt.y] == '.') 
//                        vec[nxt.x][nxt.y] = cur.ch; 
//                    else if(vec[nxt.x][nxt.y] != nxt.ch) 
//                        vec[nxt.x][nxt.y] = '*'; 
//                } 
//            } 
//        } 
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//                if(arr[i][j] == '.') { 
//                    arr[i][j] = vec [i][j]; 
//                    if(isalpha(arr[i][j])) 
//                        q.push(p(i, j, arr[i][j])); 
//                } 
//    } 
//}
//int main()
//{
//	//Read();
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> m;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				cin >> arr[i][j];
//			}
//		}
//		bfs();
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				cout << arr[i][j];
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}