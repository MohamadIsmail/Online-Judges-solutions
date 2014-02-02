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
//#include<algorithm>
//using namespace std;
//
//struct point 
//{
//	char ch;
//	int f;
//}vec[2600];
//
//char arr[52][52];
//int height,width,counter;
//
//void DFS(int X,int Y,char k)
//{
//
//	if (arr[X][Y] != k || X<0 || X>=width || Y<0 || Y>=height)
//		return ;
//	counter++;
//	arr[X][Y]='.';
//	DFS(X,Y+1,k); 
//	DFS(X+1,Y,k); 
//	DFS(X-1,Y,k); 
//	DFS(X,Y-1,k); 
//}
//
//bool sorting(point a ,point b)
//{
//	if(a.f > b.f)
//		return true;
//
//	if(a.f == b.f && a.ch < b.ch)
//		return true;
//
//
//	return false;
//}
//
//int main()
//{
//	int CASES=0;
//	while (scanf("%d %d", &width, &height))
//	{
//		if(height==0 && width==0)
//			break;
//		string str;
//		for (int i = 0; i < width; i++)
//		{
//			scanf("%s",arr[i]);
//		}
//		int length=0;
//		for (int i = 0; i < width; i++)
//		{
//			for (int k = 0; k < height; k++)
//			{
//				if(arr[i][k]!='.'){
//					counter=0;
//					vec[length].ch=arr[i][k];
//					DFS(i,k,arr[i][k]);
//					vec[length++].f=counter;
//				}
//			}
//		}
//		sort(vec,vec+length,sorting);
//		printf("Problem %d:\n",++CASES);
//		for (int i = 0; i < length; i++)
//		{
//			printf("%c %d\n",vec[i].ch, vec[i].f);
//		}
//	}
//	return 0;
//}