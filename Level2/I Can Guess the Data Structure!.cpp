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
#include <string>
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
#define Fore(it, x) for(it = x.begin(); it != x.end (); it++)
#define mem(a, s) memset(a, s, sizeof (a))
#define Read() freopen("1.txt", "r", stdin)
#define Write() freopen(".txt", "w", stdout)
#define sz(c) ((int)(c).size())
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define all(x) x.begin(),x.end()
typedef pair<int,int> PAIR;
typedef pair<PAIR ,int> PAIR2;
typedef unsigned long long ull;
typedef long double lld;
string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}

int main()
{
	//Read();
	int n;
	int key[1000];
	char value[1000];
	string str;
	while(scanf("%d",&n)!=EOF)
	{
		queue<int> q;
		stack<int>s;
		priority_queue<int>pq;
		bool isS=true,isQ=true,isPQ=true;
		for(int i=0; i<n; i++)
		{
			int op,x;
			scanf("%d %d", &op, &x);
			switch (op) {
			case 1:
				if (isS)
					s.push(x);
				if (isQ)
					q.push(x);
				if (isPQ)
					pq.push(x);
				break;
			case 2:
				if (isS) {
					if (s.empty() || s.top() != x)
						isS = false;
					else
						s.pop();
				}
				if (isQ) {
					if (q.empty() || q.front() != x)
						isQ = false;
					else
						q.pop();
				}
				if (isPQ) {
					if (pq.empty() || pq.top() != x)
						isPQ = false;
					else
						pq.pop();
				}
				break;
			}
		}
		if(isS && !isQ && !isPQ)
			cout<<"stack\n";
		else if(!isS && isQ && !isPQ)
			cout<<"queue\n";
		else if(!isS && !isQ && isPQ)
			cout<<"priority queue\n";
		else if(!isS && !isQ && !isPQ)
			cout<<"impossible\n";
		else if(( isQ && isPQ ) || ( isS && isPQ ) || (isS && isQ ))
			cout<<"not sure\n";
	}
	return 0;
}