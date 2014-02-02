//#include<iostream>
//#include<cmath>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main ()
//{
//	int n,m;
//	char x;
//	vector<vector<int> > items;
//	vector<int> str;
//	while(cin>>n)
//	{
//		for ( int i = 0; i < n; i++ ) 
//		{
//			items.push_back ( vector<int>() );
//			for ( int j = 0; j < n; j++ )
//			{
//				cin>>x;
//				m=(int)x;
//				m-=48;
//				items[i].push_back ( m );
//			}
//		}
//		for ( int i = 0; i < n; i++ ) 
//		{
//			for ( int j = 0; j < n; j++ )
//			{
//				int min=2*n;
//				if(items[i][j]==1)
//				{
//					for ( int l = 0; l < n; l++ ) 
//					{
//						for ( int k = 0; k < n; k++ )
//						{
//							if(items[l][k]==3)
//							{
//								m=abs(i-l)+abs(j-k);
//								if(m<=min)
//									min=m;
//							}
//						}
//					}
//					str.push_back(min);
//				}
//			}
//		}
//		sort(str.begin(),str.end());
//		cout<<str[str.size()-1]<<endl;
//		str.clear(),items.clear();
//	}
//	return 0;
//}