//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	int size,arr[101][101],line[101] ,temp ,max_so_far, Max;
//	while(cin>>size)
//	{
//		for(int i=0; i<size; i++)
//		{
//			for(int j=0; j<size; j++)
//				cin>>arr[i][j];
//		}
//		for(int i=0; i<size; i++)
//		{
//			memset(line,0,sizeof(line));
//			for(int j=i; j<size; j++)
//			{
//				temp=0,Max=1<<31;
//				for(int k=0; k<size; k++)
//				{
//					line[k]+=arr[j][k];
//					temp+=line[k];
//					Max=max(temp,Max);
//					if(temp<0)
//						temp=0;
//				}
//				max_so_far=max(max_so_far,Max);
//			}
//		}
//		cout<<max_so_far<<endl;
//	}
//	return 0;
//}