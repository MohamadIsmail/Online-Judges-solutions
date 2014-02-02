//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int weights[1002] ,prices[1002] , people[101] ,DP[1002][31] ;
//int n ,t, people_num;
//
//
//int solve(int index, int weight)
//{
//	if(DP[index][weight]!=-1)
//		return DP[index][weight];
//	if(index == n)
//		return 0;
//
//	int takeItem, skipItem;
//	
//	if(weights[index] <= weight)
//	{
//		takeItem = solve(index + 1, weight - weights[index]) + prices[index];
//
//		skipItem = solve(index + 1, weight);
//		
//		return DP[index][weight]=max(takeItem, skipItem);
//	}
//	else
//		return DP[index][weight]=skipItem = solve(index + 1, weight);	
//}
//
//int main()
//{
//	cin>>t;
//	while(t--)
//	{
//		cin>>n;
//		for(int i=0; i<n; i++)
//			cin>>prices[i]>>weights[i];
//		cin>>people_num;
//		for(int i=0; i<people_num; i++)
//			cin>>people[i];
//		int max=0;
//		memset(DP,-1, sizeof (DP));
//		for(int i=0; i<people_num; i++)
//		{
//			max+=solve(0,people[i]);
//		}
//		cout <<max << endl;
//	}
//	return 0;
//}