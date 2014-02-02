//#include<iostream>
//#include<cstring>
//#include<utility>
//#include<map>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//#include<algorithm>
//#include<cstdio>
//#include<cmath>
//using namespace std;
//
//struct edge
//{
//	int from,to;
//	double cost;
//};
//
//int getParent(int i,int *set)
//{
//    if(i==set[i])
//        return i;
//    else
//        return (set[i]=getParent(set[i],set));
//}
//
//int isUnion(int a,int b,int* set)
//{
//    return getParent(a,set)==getParent(b,set);
//}
//
//void makeUnion(int a,int b,int* set)
//{
//    set[getParent(a,set)] = getParent(b,set);
//}
//
//bool sorting(edge e1 , edge e2) 
//{
//	return e1.cost < e2.cost;
//}
//const int SIZE = 104;
//double distance(double x1,double y1,double x2 ,double y2)
//{
//	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
//}
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	double Nodes[500][2],res;
//	edge Edglist[10000];
//	int t,n,set[500];
//	scanf("%d",&t);
//	string str;
//	getline(cin,str);
//	while (t--)
//	{
//		scanf("%d",&n);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%lf %lf",Nodes[i], Nodes[i]+1);
//		}
//		int counter=0,done=0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = i+1; j < n; j++)
//			{
//				Edglist[counter].from=i;
//				Edglist[counter].to=j;
//				Edglist[counter].cost=distance(Nodes[i][0],Nodes[i][1],Nodes[j][0],Nodes[j][1]);
//				counter++;
//			}
//		}
//		sort(Edglist, Edglist+counter,sorting);
//		res=0;
//		for(int i=0;i<n;i++)set[i]=i;
//		for (int i = 0; i <counter && done<n-1; i++)
//		{
//			if(!isUnion(Edglist[i].from,Edglist[i].to,set))
//			{
//				res+=Edglist[i].cost;
//				makeUnion(Edglist[i].from,Edglist[i].to,set);
//				done++;
//			}
//		}
//		printf("%.2lf\n",res);
//		if(t)
//			printf("\n");
//	}
//	return 0;
//}