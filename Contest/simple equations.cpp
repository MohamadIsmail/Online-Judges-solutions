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
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define mem(a, s) memset(a, s, sizeof (a))
#define Read() freopen("1.txt", "r", stdin)
#define Write() freopen(".txt", "w", stdout)
#define sz(c) ((int)(c).size())
#define pb push_back
#define mp make_pair
#define vi vector<int>
typedef pair<int,int> PAIR;
typedef pair<PAIR ,int> PAIR2;
typedef unsigned long long ull;
typedef long double lld;
string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}

int A,B,C,cases;
int k,x,y,z,v1,v2,v3;
void solve(){    
	for(x = -B; x < B; x++){
		if(!x || B%x) continue;
		k = B/abs(x);
		for(y = x+1; y < k; y++){
			if(!y || B%y) continue;
			v1 = (A-x-y);v1 *= v1;
			v2 = B/x/y; v2*=v2;
			v3 = C-x*x-y*y;
			if(v1 == v2 && v2 == v3){ printf("%d %d %d\n",x,y,A-x-y); return;}
		}
	}
	printf("No solution.\n");
}
int main()
{
	freopen("1.txt","r",stdin);
	scanf("%u\n",&cases);
	while(cases--){
		scanf("%d %d %d\n",&A,&B,&C);
		solve();        
	}
	return 0;
}
