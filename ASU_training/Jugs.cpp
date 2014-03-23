
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <queue>
#include <assert.h>
#include <cctype>
#include <string.h>
using namespace std;

#define INF_MAX 2147483647
#define INF_MIN -2147483647

#define pi acos(-1.0)
#define INF 1e9
#define ll long long

#define For(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define mem(a, s) memset(a, s, sizeof (a))
#define Read() freopen("1.txt", "r", stdin)
#define Write() freopen(".txt", "w", stdout)
#define sz(c) ((int)(c).size())
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define vi vector<int>
typedef pair<int,int> PAIR;
typedef pair<PAIR ,int> PAIR2;
string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
#define mod 1000000007 

string commands[]={"fill A","fill B","empty A", "empty B",   "pour A B",  "pour B A"};
bool visited[1005][1005];
int N,A,B;

void bfs() {
	vi vec;
	queue<pair<pair<int, int>, vi > > q;
	q.push(make_pair(make_pair(0, 0), vec));
	while(!q.empty()) {
		int a = q.front().first.first;
		int b = q.front().first.second;
		vec = q.front().second;
		q.pop();

		if(b == N) {
			for(int i = 0; i < vec.size(); i++)
				cout << commands[vec[i]] << endl;
			printf("success\n");
			break;
		}

		int na = 0, nb = 0;
		if(a != A) {
			// fill a
			if(!visited[A][b]) 
			{
				visited[A][b] = true;
				vec.push_back(0);
				q.push(make_pair(make_pair(A, b), vec));
				vec.pop_back();
			}
			na = a + b;
			nb = 0;
			if(na > A) {
				nb = na - A;
				na = A;
			}
			if(b != 0 && !visited[na][nb]) {
				// pour from b to a
				visited[na][nb] = true;
				vec.push_back(5);
				q.push(make_pair(make_pair(na, nb), vec));
				vec.pop_back();
			}
		}
		if(b != B) {
			// fill b
			if(!visited[a][B]) {
				visited[a][B] = true;
				vec.push_back(1);
				q.push(make_pair(make_pair(a, B), vec));
				vec.pop_back();
			}
			na = 0;
			nb = a + b;
			if(nb > B) {
				na = nb - B;
				nb = B;
			}
			if(a != 0 && !visited[na][nb]) {
				// pour from a to b
				visited[na][nb] = true;
				vec.push_back(4);
				q.push(make_pair(make_pair(na, nb), vec));
				vec.pop_back();
			}
		}
		if(a != 0 && !visited[0][b]) {
			// empty a
			visited[0][b] = true;
			vec.push_back(2);
			q.push(make_pair(make_pair(0, b), vec));
			vec.pop_back();
		}
		if(b != 0 && !visited[a][0]) {
			// empty b
			visited[a][0] = true;
			vec.push_back(3);
			q.push(make_pair(make_pair(a, 0), vec));
			vec.pop_back();
		}
	}
}

int main()
{
	//Read();
	while (cin >> A >>B >> N)
	{
		mem(visited,false);
		bfs();
	}
	return 0;
}
