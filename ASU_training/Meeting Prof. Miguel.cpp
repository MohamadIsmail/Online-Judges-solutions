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
//
//int main()
//{
//	//Read();
//	int young[30][30],man [30][30],n,t;
//	while (cin >> n && n)
//	{
//		for (int i = 0; i < 30; i++)
//		{
//			for (int j = 0; j < 30; j++)
//			{
//				young[i][j]=INF;
//				man[i][j]=INF;
//			}
//		}
//		for (int i = 0; i < 30; i++)
//		{
//			young[i][i]=man[i][i]=0;
//		}
//		char a,b,x,y,e;
//		int cost;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a >> b >> x >>y >>cost;
//			if(a=='Y'){
//				if(b=='U'){
//					young[x-'A'][y-'A']=min(young[x-'A'][y-'A'],cost);
//				}
//				else{
//					young[x-'A'][y-'A']=min(young[x-'A'][y-'A'],cost);
//					young[y-'A'][x-'A']=min(young[y-'A'][x-'A'],cost);
//				}
//			}
//			else
//			{
//				if(b=='U'){
//					man[x-'A'][y-'A']=min(man[x-'A'][y-'A'],cost);
//				}
//				else{
//					man[x-'A'][y-'A']=min(man[x-'A'][y-'A'],cost);
//					man[y-'A'][x-'A']=min(man[y-'A'][x-'A'],cost);
//				}
//			}
//		}
//		char source,dist;
//		cin >> source >> dist;
//		for (int k = 0; k < 30; k++)
//		{
//			for (int i = 0; i < 30; i++)
//			{
//				for (int j = 0; j < 30; j++)
//				{
//					young[i][j]=min(young[i][j],young[i][k]+young[k][j] );
//					man[i][j]=min(man[i][j],man[i][k]+man[k][j]);
//				}
//			}
//		}
//		vector<char>res;
//		int Max=INF;
//		for (char i = 'Z'; i >= 'A'; i--)
//		{
//			if(Max> young[source-'A'][i-'A']+man[dist-'A'][i-'A']){
//				res.clear();
//				Max=young[source-'A'][i-'A']+man[dist-'A'][i-'A'];
//				res.pb(i);
//			}
//			else if(Max==young[source-'A'][i-'A']+man[dist-'A'][i-'A'])
//				res.pb(i);
//		}
//		sort(res.begin(),res.end());
//		if(Max!=INF){
//			cout << Max;
//			for (int i = 0; i < res.size(); i++)
//			{
//				cout << " "<< res[i];
//			}
//			cout<< endl;
//		}
//		else
//			cout << "You will never meet.\n";
//	}
//	return 0;
//}