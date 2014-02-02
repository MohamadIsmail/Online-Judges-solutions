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

int dp[101][101],cum[101], arr[101];
int sum(int x ,int y){
	return cum[y]-cum[x]+arr[x];
}

int solve(int i, int j)
{
	if(i > j)
		return 0;
	int &res=dp[i][j];
	if(res!=INF_MIN)
		return res;
	for (int k = i; k <= j; k++)
		res=max(res,sum(i,k)-solve(k+1,j));
	for (int k = j; k >=i ; k--)
		res=max(res,sum(k,j)-solve(i,k-1));
	return res;
}
int main()
{
	//Read();
	int n;
	while (cin >> n && n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				dp[i][j]=dp[i][j]=INF_MIN;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cum[0]=arr[0];
		for (int i = 1; i < n; i++)
		{
			cum[i]=cum[i-1]+arr[i];
		}
		cout << solve(0,n-1)<< endl;
	}
	return 0;
}
