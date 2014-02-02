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
//bool lucky(int num)
//{
//	while (num)
//	{
//		if(num%10!=7 && num%10!=4)
//			return false;
//		num/=10;
//	}
//	return true;
//}
//int main()
//{
//	//Read();
//	int n,val;
//	while (cin >>n)
//	{
//		vector<PAIR>arr,vec,result;
//		for (int i = 0; i < n; i++)
//		{
//			cin>>val;
//			arr.pb(mp(val,0));
//			vec.pb(mp(val,i));
//		}
//		sort(all(vec));
//		bool ok=true;
//		for (int i = 0; i < n; i++)
//		{
//			if(vec[i].first!=arr[i].first){
//				ok=false;
//				break;
//			}
//		}
//		if(ok)
//		{
//			cout<<"0\n";
//			continue;
//		}
//		ok=false;
//		int k;
//		for (int i = 0; i < n; i++)
//		{
//			if(lucky(arr[i].first))
//			{
//				ok=true;
//				k=i;
//				break;
//			}
//		}
//		if(!ok){
//			cout<<"-1\n";
//			continue;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			arr[vec[i].second].second=i;
//		}
//		k=arr[k].second;
//		result.clear();
//		for (int i = 0; i < n; i++)
//		{
//			if(vec[i].first==arr[i].first && vec[i].second ==arr[i].second)
//				continue;
//			if(vec[k].second!=i)	
//				result.push_back(mp(vec[k].second+1,i+1));
//			swap(arr[i],arr[vec[k].second]);
//			vec[arr[vec[k].second].second].second=vec[k].second;
//			vec[k].second=i;
//			if(i!=vec[i].second)
//				result.push_back(mp(i+1,vec[i].second+1));
//			swap(arr[i],arr[vec[i].second]);
//			vec[k].second=vec[i].second;
//			vec[i].second=i;
//		}
//		cout<<result.size()<<endl;
//		for (int i = 0; i < result.size(); i++)
//		{
//			cout<<result[i].first <<" "<< result[i].second << endl;
//		}
//	}
//}