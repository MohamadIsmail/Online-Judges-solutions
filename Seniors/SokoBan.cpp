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
//#include <string.h>
//using namespace std;
//
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//
//#define pi acos(-1.0)
//#define INF 1e+9
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
//#define vi vector<int>
//int countBits(long long mask) {int res = 0; while(mask) mask &= (mask - 1), ++ res; return res;}
//
//char arr[15][15];
//int r,c,Case=0;
//
//
//bool check(int i, int j)
//{
//	if(i>=0 && j>=0 && i<r && j<c )
//		return arr[i][j]!='#';
//	return false;
//}
//
//void Leave(int y, int x)
//{
//    if(arr[y][x] == 'W')
//        arr[y][x] = '+';
//    else
//        arr[y][x] = '.';
//}
//int main()
//{
//	//Read();
//	map<char,int>dx,dy;
//	dx['L'] = -1;
//    dx['R'] = 1;
//    dx['U'] = 0;
//    dx['D'] = 0;
//    dy['U'] = -1;
//    dy['D'] = 1;
//    dy['L'] = 0;
//    dy['R'] = 0;
//	while (cin >> r >>c && (r||c))
//	{
//		
//		int ok=0,lx,ly,nx,ny,nnx,nny;
//		cout <<"Game "<<++Case<<": ";
//		for (int i = 0; i < r; i++)
//		{
//			for (int j = 0; j < c; j++)
//			{
//				cin >> arr[i][j];
//				ok+=(arr[i][j]=='b');
//				if(arr[i][j]=='w'|| arr[i][j]=='W')
//				{
//					lx=j,ly=i;
//				}
//			}
//		}
//		string keys;
//		cin >> keys;
//
//		for (int i = 0; i < keys.size(); i++)
//		{
//			if(!ok)break;
//			nx=lx+dx[keys[i]];
//			ny=ly+dy[keys[i]];
//			if(check(ny,nx))
//			{
//				if(arr[ny][nx]=='b'|| arr[ny][nx]=='B')
//				{
//					nnx=nx+dx[keys[i]];
//					nny=ny+dy[keys[i]];
//					if(check(nny,nnx) && arr[nny][nnx]!='b' &&arr[nny][nnx]!='B')
//					{
//						Leave(ly,lx);
//						if(arr[ny][nx]=='b')
//							arr[ny][nx]='w';
//						else
//						{
//							arr[ny][nx]='W';
//							ok++;
//						}
//						if(arr[nny][nnx]=='.')
//							arr[nny][nnx]='b';
//						else
//						{
//							ok--;
//							arr[nny][nnx]='B';
//						}
//						lx=nx;
//						ly=ny;
//					}
//				}
//				else
//				{
//					Leave(ly,lx);
//					if(arr[ny][nx] == '.')
//                        arr[ny][nx] = 'w';
//                    else if(arr[ny][nx] == '+')
//                        arr[ny][nx] = 'W';
//                    lx = nx;
//                    ly = ny;
//				}
//			}
//		}
//		if(!ok)
//			cout << "complete\n";
//		else
//			cout <<"incomplete\n";
//		for (int i = 0; i < r; i++)
//		{
//			for (int j = 0; j < c; j++)
//			{
//				cout <<arr[i][j];
//			}
//			cout << endl;
//		}
//	}
//}