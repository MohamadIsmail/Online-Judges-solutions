//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	vector<int> first_half ,second_half , arr;
//	int test , length ,n,num, maxi;
//	cin>>test;
//	while(test--)
//	{
//		cin>>length>>n;
//		for(int k=0; k<n; k++)
//		{
//			cin>>num;
//			arr.push_back(num);
//		}
//		if(n==0)
//		{
//			cout<<"0 0\n";
//			continue;
//		}
//		for(int k=0; k<n; k++)
//		{
//			if(arr[k]>=length/2)
//				second_half.push_back(arr[k]);
//			else
//				first_half.push_back(arr[k]);
//		}
//		sort(first_half.begin(),first_half.end());
//		sort(second_half.begin(),second_half.end());
//		if(!second_half.empty() && !first_half.empty())
//			maxi=max(length-second_half[0],first_half[0]);
//		if(second_half.empty())
//			maxi=first_half[0];
//		if(first_half.empty())
//			maxi=length-second_half[0];
//		cout<<maxi<<" ";
//
//		sort(arr.begin(),arr.end());
//		cout<<max(length-arr[0],arr[n-1])<<endl;
//		arr.clear(),first_half.clear(),second_half.clear();
//	}
//	return 0;
//}