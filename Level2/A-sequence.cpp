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
#define Write() freopen("2.txt", "w", stdout)
#define sz(c) ((int)(c).size())
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define vi vector<int>
typedef pair<int,int> PAIR;
typedef pair<PAIR ,int> PAIR2;
string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}

int arr[31],dp[1001],n;


int main()
{
	//Read();
	int case_num=0;
	while(cin>>n)
	{
		mem(dp,0);
		bool flag=true;
		for(int i=0; i<n; i++)
		    cin>>arr[i];
		dp[0]=1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 1000; j >=0; j--)
			{
				if(dp[j] && j+arr[i]<=1000 )
					dp[j+arr[i]]++;
			}
		}
		if(arr[0]<1)
			flag=true;
		for(int i=1; i<n; i++)
		    if(arr[i] <= arr[i-1])
		        flag=false;
		
		for (int i = 0; i < n; i++)
			if(dp[arr[i]]>1)
				flag=false;
		cout<<"Case #"<<++case_num<<":";
		for(int i=0; i<n; i++)
		    cout<<" "<<arr[i];
		if(flag)
		    cout<<"\nThis is an A-sequence.\n";
		else
		    cout<<"\nThis is not an A-sequence.\n";
	}
	return 0;
}
