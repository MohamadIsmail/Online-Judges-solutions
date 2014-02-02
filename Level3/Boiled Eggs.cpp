//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	vector<int> arr;
//	int test ,n , num ,max_num, max_weight, case_num=0;
//	cin>>test;
//	while(test--)
//	{
//		cin>>n>>max_num>>max_weight;
//		int weight=0,counter=0;
//		for(int k=0; k<n; k++)
//		{
//			cin>>num;
//			arr.push_back(num);
//		}
//		sort(arr.begin(),arr.end());
//		for(int k=0; k<n; k++)
//		{
//			if(counter==max_num || weight+arr[k]>max_weight)break;
//			weight+=arr[k];
//			counter++;
//		}
//		cout<<"Case "<<++case_num<<": "<<counter<<endl;
//		arr.clear();
//	}
//	return 0;
//}