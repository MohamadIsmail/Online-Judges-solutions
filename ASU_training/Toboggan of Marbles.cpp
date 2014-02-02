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
//int yi[1000],xf[1000],yf[1000];
//double dist(pair<int, int> li, pair<int, int> lf, pair<int, int> p)
//{
//	double x1 = li.first;
//	double y1 = li.second;
//	double x2 = lf.first;
//	double y2 = lf.second;
//	double x = p.first;
//	double y = p.second;
//	double s1 = (y2-y1)/(x2-x1);
//	double s2 = -1.0/s1;
//	double a1 = y1-(s1*x1);
//	double a2 = y-(s2*x);
//	double nx = (a2-a1)/(s1-s2);
//	double ny = (s2*nx)+a2;
//	if(((nx <= x1 && nx >= x2) || (nx >= x1 && nx <= x2)) && ((ny <= y1 && ny >= y2) || (ny >= y1 && ny <= y2)))
//	{
//		double dx = nx-x;
//		double dy = ny-y;
//		double distance = sqrt(dx*dx+dy*dy);
//		return distance;
//	}
//	else
//	{
//		double dx = x2-x;
//		double dy = y2-y;
//		double distance = sqrt(dx*dx+dy*dy);
//		return distance;
//	}
//}
//int main()
//{
//
//	int n, l, h;
//	double minD;
//	while(cin>>n)
//	{
//		minD = INF_MAX;
//		cin>>l>>h;
//		for(int i=0;i<n;i++)
//		{
//			cin>>yi[i]>>xf[i]>>yf[i];
//		}
//		for(int i=0;i<n;i+=2)
//		{
//			minD = min(minD, (double)(l-xf[i]));
//			if(i+1<n)
//				minD = min(minD, dist(make_pair(l, yi[i+1]), make_pair(xf[i+1], yf[i+1]), make_pair(xf[i], yf[i])));
//		}
//		for(int i=1;i<n;i+=2)
//		{
//			minD = min(minD, (double)xf[i]);
//			if(i+1<n)
//				minD = min(minD, dist(make_pair(0, yi[i+1]), make_pair(xf[i+1], yf[i+1]), make_pair(xf[i], yf[i])));
//		}
//		printf("%.2f\n", minD);
//	}
//}