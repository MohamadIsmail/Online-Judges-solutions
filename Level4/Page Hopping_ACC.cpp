//#include<iostream>
//#include<cstring>
//#include<utility>
//#include<map>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//#include<cstdio>
//#include<climits>
//using namespace std;
//
//int Graph[103][103];
//int m,V,vertix[103];
//
//void floyd()
//{
//	for (int k = 1; k <= V; k++) 
//		for (int i = 1; i <= V; i++)
//			for (int j = 1; j <= V; j++)
//				if(Graph[i][k] + Graph[k][j] < Graph[i][j])
//					Graph[i][j] = Graph[i][k] + Graph[k][j];
//}
//int main()
//{	
//	int x,y,CASE=0;
//	while (cin>>x>>y)
//	{
//		V=0;
//		if(!x && !y)break;
//		memset(vertix,0,sizeof(vertix));
//		for (int i = 0; i < 102; i++)
//		{
//			for (int j = 0; j < 102; j++)
//			{
//				Graph[i][j]=10000;
//			}
//			Graph[i][i]=0;
//		}
//		x-=1,y-=1;
//		if(! vertix[x])
//			vertix[x]=++V;
//		if(! vertix[y])
//			vertix[y]=++V;
//		Graph[vertix[x]][vertix[y]]=1;
//		while(scanf("%d %d", &x ,&y),(x||y) )
//		{	
//			x-=1,y-=1;
//			if(!vertix[x])
//				vertix[x]=++V;
//			if(!vertix[y])
//				vertix[y]=++V;
//			Graph[vertix[x]][vertix[y]]=1;
//		}
//		floyd();
//		double sum=0.0,avg;
//		for (int i = 1; i <= V; i++)
//		{
//			for (int j= 1; j <= V; j++)
//			{
//				if(Graph[i][j]>0 && Graph[i][j]<10000)
//					sum+=Graph[i][j];
//			}
//		}
//		avg=sum/(double)(V*(V-1));
//		printf("Case %d: average length between pages = %.3lf clicks\n",++CASE,avg);
//	}
//	return 0;
//}