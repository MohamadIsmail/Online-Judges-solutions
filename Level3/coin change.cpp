//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//long long DP[1002][5],Cubic[5]={1,5,10,25,50};
//
// long long coin_change(int index, int sum)
//{
//	if(sum == 0) 
//		return DP[sum][index]=1;
//	if(index==5) 
//		return 0;
//	if(DP[sum][index]!=-1)
//		return DP[sum][index];
//	/*for (int i = 0; i * Cubic[index] <= sum; ++i)
//		 DP[sum][index] += coin_change(index + 1, sum - Cubic[index] * i);
//		/*for(int index=0; index<size; index++)
//			DP[sum][index]+=coin_change(index,sum-Cubic[index]);// shift index by for loop*/
//	return DP[sum][index]=coin_change(index+1,sum)+coin_change(index,sum-Cubic[index]);
// }
//
//int main()
//{
//	int n;
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