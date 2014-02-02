//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//long long DP[10002][22],Cubic[21],size;
//
// long long coin_change(int index, int sum)
//{
//	if(sum == 0) return 1;
//	if(index==21)
//		return 0;
//	if(DP[sum][index]!=-1)
//		return DP[sum][index];
//	for (int i = 0; i * Cubic[index] <= sum; ++i)
//		 DP[sum][index] += coin_change(index + 1, sum - Cubic[index] * i);
//
//		/*for(int index=0; index<size; index++)
//			DP[sum][index]+=coin_change(index,sum-Cubic[index]);// shift index by for loop*/
//	return ++DP[sum][index];
// }
//
//int main()
//{
//	int n;
//	Cubic[0] =1;
//	for( int i = 1; i < 21 ; i++ )
//		Cubic[i]=(i+1)*(i+1)*(i+1);
//	memset(DP,-1,sizeof(DP));
//	while(cin>>n)
//	{
//		/*size=0;
//		for(int i=0; i<=n; i++)
//		{
//			if(Cubic[i]<=n)
//				size++;
//			else
//				break;
//		}*/
//		cout<<coin_change(0,n)<<endl;
//	}
//	return 0;
//}