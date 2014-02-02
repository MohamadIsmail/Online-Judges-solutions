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

long long n,m,l;
vector<long long>str;

bool odd (long long x)
{
	if ( x < 0 ) x *= -1;
	if ( x % 2 ) return true;
	return false;
}
bool even (long long x)
{
	if ( x < 0 ) x *= -1;
	if ( x % 2 == 0 ) return true;
	return false;
}
bool Case(long long elem1, long long elem2)
{
	if(elem1%m>elem2%m)
		return (elem1 > elem2);
	else if(elem1%m<elem2%m)
		return (elem2 > elem1);
	else
	{
		if( odd(elem2) && even(elem1) )
			return (elem1 > elem2);
		else if(odd(elem1) && odd(elem2))
			return (elem1 < elem2);
		return elem1%m==elem2%m && odd(elem1) && even(elem2);
		else if(odd(elem1) && odd(elem2) && elem1>elem2)
			return (elem1 > elem2);
		return elem1%m==elem2%m && odd(elem1) && odd(elem2) && elem1>elem2;
		else
		{
			if( elem1>elem2 )
				return (elem1 > elem2);
			else
				return (elem1 < elem2);
		}
		return elem1%m==elem2%m && even(elem1) && even(elem2) && elem1<elem2;
	}
}
*struct compare
{
	bool operator()(const BookData& elem1, const BookData& elem2) const
	{
		return x < y;
		if(elem1%m>elem2%m)
			return (elem1 > elem2);
		else if(elem1%m<elem2%m)
			return (elem2 > elem1);
		else
		{
			if( odd(elem2) && even(elem1) )
				return (elem1 > elem2);
			else if(odd(elem1) && odd(elem2))
				return (elem1 < elem2);
			else if(odd(elem1) && odd(elem2) && elem1>elem2)
				return (elem1 > elem2);
			else
			{
				if( elem1>elem2 )
					return (elem1 > elem2);
				else
					return (elem1 < elem2);
			}
		}
	}
};

int main ()
{
	while(cin>>n>>m)
	{
		cout<<n<<" "<<m<<endl;
		if(n==0 && m==0)break;
		for(int i=0; i<n; i++)
		{
			cin>>l;
			str.push_back(l);
		}
		sort( str.begin(), str.end(), Case);
		sort (str.begin(), str.end(), compare());
		/*sort( str.begin(), str.end() );
		sort( str.begin(), str.end(), Case1);
		sort( str.begin(), str.end(), Case2);
		sort( str.begin(), str.end(), Case3);*/
		for(int i=0; i<n; i++)
			cout<<str[i]<<endl;
		str.clear();
	}
	return 0;
}
///////////////////////////////////////////////////////////////
///*#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
// 
//long long n,m,l;
//vector<long long>str;
// 
//bool odd (long long x)
//{
//        if ( x < 0 ) x *= -1;
//        if ( x % 2 ) return true;
//        return false;
//}
//bool even (long long x)
//{
//        if ( x < 0 ) x *= -1;
//        if ( x % 2 == 0 ) return true;
//        return false;
//}
//bool Case(long long elem1, long long elem2)
//{
//        return elem1%m<elem2%m;
//}
//bool Case1(long long elem1, long long elem2)
//{
//        return elem1%m==elem2%m && odd(elem1) && even(elem2);
//}
//bool Case2(long long elem1 ,long long elem2)
//{
//        return elem1%m==elem2%m && odd(elem1) && odd(elem2) && elem1>elem2;
//}
//bool Case3(long long elem1 ,long long elem2)
//{
//        return elem1%m==elem2%m && even(elem1) && even(elem2) && elem1<elem2;
//}
// 
//int main ()
//{
//        while(cin>>n>>m)
//        {
//                cout<<n<<" "<<m<<endl;
//                if(n==0 && m==0)break;
//                for(int i=0; i<n; i++)
//                {
//                        cin>>l;
//                        str.push_back(l);
//                }
//                //sort( str.begin(), str.end() );
//                sort( str.begin(), str.end(), Case);
//                sort( str.begin(), str.end(), Case1);
//                sort( str.begin(), str.end(), Case2);
//                sort( str.begin(), str.end(), Case3);
//                for(int i=0; i<n; i++)
//                        cout<<str[i]<<endl;
//                str.clear();
//        }
//        return 0;
//}*/