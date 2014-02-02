//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int square_nums[50001][3]={0},square[50001]={1};
//
//void sieve()
//{
//    for(int i = 0; i*i <= 50000; i++)
//	{
//		for(int j = 0; j*j <= 50000; j++)
//			for(int k = 0; k*k <= 50000; k++)
//			{
//				int sum = i*i+j*j+k*k;
//				if(sum > 50000)  break;
//				if(!square[sum])
//				{
//				square_nums[sum][0] = i, square_nums[sum][1] = j, square_nums[sum][2] = k;
//				square[sum] = 1;
//				}
//			}
//	}
//}
//
//int main ()
//{
//	int n,m;
//	sieve();
//	cin>>n;
//	while(n--)
//	{
//		cin>>m;
//		if(square_nums[m][0] || square_nums[m][1] || square_nums[m][2])
//			cout<<square_nums[m][0]<<" "<<square_nums[m][1]<<" "<<square_nums[m][2]<<endl;
//		else
//			cout<<"-1\n";
//	}
//	return 0;
//}
