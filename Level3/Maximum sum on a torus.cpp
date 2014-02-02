//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//#define MAX 160
//
//int case_num,arr[MAX][MAX];
//
//
//int Kadane_algo(int end)
//{
//	int line[101] ,temp ,max_so_far, Max;
//	for(int i=0; i<end; i++)
//	{
//		memset(line,0,sizeof(line));
//		for(int j=i; j<end; j++)
//		{
//			temp=0,Max=1<<31;
//			for(int k=0; k<end; k++)
//			{
//				line[k]+=arr[j][k];
//				temp+=line[k];
//				Max=max(temp,Max);
//				if(temp<0)
//					temp=0;
//			}
//			max_so_far=max(max_so_far,Max);
//		}
//	}
//	return max_so_far;
//}
//int wraping(int n)
//{
//	int wrap_max=0,kadane=Kadane_algo(n);
//	for(int i=0; i<n; i++)
//	{
//		for(int j=0; j<n; j++)
//		{
//			wrap_max+=arr[i][j];
//			arr[i][j]=-arr[i][j];
//		}
//	}
//
//	wrap_max+=Kadane_algo(n);
//	return (wrap_max > kadane)? wrap_max: kadane;
//}
//int main()
//{
//	int size;
//	cin>>case_num;
//	while(case_num--)
//	{
//		cin>>size;
//		for(int i=0; i<size; i++)
//		{
//			for(int j=0; j<size; j++)
//			{
//				cin>>arr[i][j];
//				arr[i+size][j]=arr[i][j+size]=arr[i+size][j+size]=arr[i][j];
//			}
//		}
//		cout<<wraping(size)<<endl;
//		/*for(int i=0; i<size; i++)
//		{
//			for(int j=0; j<size; j++)
//			{
//				if(i>0)arr[i][j]+=arr[i-1][j];
//			}
//		}
//		for(int i=0; i<=size; i++)
//		{
//			memset(line,0,sizeof(line));
//			for(int j=0; j<(size*2)-i; j++)
//			{
//				temp=0,Max=1<<31;
//				for(int k=0; k < size*2; k++)
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
//		cout<<max_so_far<<endl;*/
//	}
//	return 0;
//}