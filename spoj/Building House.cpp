#include<iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include<cstdlib>
#include<climits>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN -2147483648


int main()
{
	//freopen("1.txt","rt",stdin);
	int test,num=0,width,height;
	char arr[52][52];
	scanf("%d",&test);
	while (test--)
	{
		scanf("%d %d",&width,&height);
		int x=0;
		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < height; j++)
			{
				cin>>arr[i][j];
			}
		}
		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if(	arr[i][j]=='S'||	arr[i][j]=='G')
				{
					for (int k = i; k < width; k++)
					{
						for (int l = j; l < height; l++)
						{
							if(	arr[i][j]=='S'||	arr[i][j]=='G')
							{

							}
						}
					}
					x++;
				}
			}
		}
		cout<<"Case #"<<++num<<": "<<x<<endl;
	}
	return 0;
}