//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int T,m,n,area[400];
//	bool check;
//	cin>>T;
//	for(int cases=0; cases<T; cases++)
//	{
//		char arr[20][20];
//		cin>>n>>m;
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<m; j++)
//				cin>>arr[i][j];
//		}
//		int counter=0;
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<m; j++)
//			{
//				if(arr[i][j]=='F')
//				{
//					int w=0,h=0,min_w=1000000,min_h=10000000;
//					check =true;
//					for(int x=i; x<n; x++)
//					{
//						for(int y=j; y<m; y++)
//						{
//							if(arr[x][y]=='F')
//								w++;
//							else
//							{
//								if(y==j)
//									check=false;
//								break;
//							}
//						}
//						if(w<min_w)
//							min_w=w;
//						if(!check)break;
//					}
//					check =true;
//					for(int y=j; y<m; y++)
//					{
//						for(int x=i; x<n; x++)
//						{
//							if(arr[x][y]=='F')
//								h++;
//							else
//							{
//								if(x==i)
//									check=false;
//								break;
//							}
//						}
//						if(h<min_h)
//							min_h=h;
//						if(!check)break;
//					}
//					area[counter]=min_h*min_w;
//					counter++;
//				}
//			}
//		}
//		sort(area,area+counter);
//		cout<<area[counter-1]<<endl;
//	}
//	return 0;
//}