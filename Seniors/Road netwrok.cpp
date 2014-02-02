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
//#include <string>
//#include <cctype>
//#include <string.h>
//using namespace std;
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//#define pi acos(-1.0)
//#define INF 1e9
//#define ll long long
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
//
//const int MAX_N = 150+2;
//const int MAX_Q = 6000+2;
//const int MAX_C = 10000+2;
//const int OO = 2 * MAX_N * MAX_C;
//
//int cost[MAX_N][MAX_N];
//int q_idx[MAX_Q], q_s[MAX_Q], q_e[MAX_Q], q_ans[MAX_Q];
//
//int main()
//{ 
//	//Read();
//
//	//int T,n,k;
//	/*cin>>n;
//	for (int k = 0; k < n-1; k++)
//	{
//	for (int j = i+1; j < n; j++)
//	{
//	cin >> graph[k][j];
//	}
//	}
//	int p;
//	cin >>p;
//	for (int k = 0; k < p; k++)
//	{
//	cin >>Rlist[k];
//	}
//	int q,k,source,dist;
//	cin >> q;
//	cout << "Case "<<i<<":";
//	for (int j = 0; j < q; j++)
//	{
//	cin >> k >> source >> dist;
//	}
//	*/
//	int cases;
//	scanf("%d", &cases);
//
//
//	int mxQ = 1;
//
//	for (int cc = 1; cc <= cases; ++cc) {
//
//		printf("Case %d: ", cc);
//
//		int n;
//		scanf("%d", &n);
//
//		for (int i = 0; i < n; ++i) {
//			for (int j = i+1; j < n; ++j) {
//				scanf("%d", &cost[i][j]);
//
//				if(cost[i][j] == -1)
//					cost[i][j] = OO;
//				cost[j][i] = cost[i][j];
//			}
//		}
//		int p;
//		scanf("%d", &p);
//		vector<int> perm(p);
//		set<int> st;
//		for (int i = 0; i < p; ++i) {
//			scanf("%d", &perm[i]);
//			perm[i]--;
//			st.insert(perm[i]);
//		}
//
//		int q;
//		scanf("%d", &q);
//		mxQ = max(mxQ, q);
//
//		vector< vector<int> > quries(n+1);
//		for (int i = 0; i < q; ++i) {
//			scanf("%d%d%d", &q_idx[i], &q_s[i], &q_e[i]);
//			q_s[i]--, q_e[i]--;
//
//			if(q_idx[i] == 0)
//				q_ans[i] = cost[ q_s[i] ][ q_e[i] ];
//			else
//				quries[ q_idx[i] ].push_back(i);
//		}
//
//		//floyd modified to work on given permutation rather than default sorted permutation
//		for (int kt = 0; kt < perm.size(); ++kt) {
//			int k = perm[kt];
//			for (int i = 0; i < n; ++i) {
//				for (int j = 0; j < n; ++j) {
//					cost[i][j] = min(cost[i][j], cost[i][k]+cost[k][j]);
//				}
//			}
//			// save answer for queries than needs only first (kt+1) numbers
//			for (int t = 0; t < quries[kt+1].size(); ++t) {
//				int id = quries[kt+1][t];
//				q_ans[id] = cost[ q_s[id] ][ q_e[id] ];
//			}
//		}
//
//		for (int i = 0; i < q; ++i) {
//			if(i)	cout<<" ";
//			if(q_ans[i] == OO)
//				q_ans[i] = -1;
//
//			cout<<q_ans[i];
//		}
//		cout<<"\n";
//	}
//	return 0;
//}