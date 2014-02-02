//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//int prices[101] ,favourite[101] ,DP[10201][101] ;
//int n ,maximum;
//bool enter;
//
//int solve(int index, int price)
//{
//	if(DP[price][index]!=-1)
//		return DP[price][index];
//	if(index == n)
//		return 0;
//	int takeItem=0, skipItem;
//	
//	if(prices[index] <= price)
//		takeItem = solve(index + 1, price - prices[index]) + favourite[index];
//
//	else if((abs((price-prices[index])-maximum)> 2000   && enter==false) )
//	{
//		price+=200;
//		enter=true;
//		takeItem = solve(index + 1, price - prices[index]) + favourite[index];
//	}
//
//	skipItem = solve(index + 1, price);
//	
//	return DP[price][index]=max(takeItem, skipItem);	
//}
//
//int main()
//{
//	while(cin>>maximum>>n)
//	{
//		enter=false;
//		for(int i=0; i<n; i++)
//			cin>>prices[i]>>favourite[i];
//		memset(DP,-1,sizeof(DP));
//		cout <<solve(0,maximum)<< endl;
//	}
//	return 0;
//}