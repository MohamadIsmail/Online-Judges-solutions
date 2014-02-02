//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	vector<int> arr,str;
//	vector<char> stone;
//	int test ,n ,length,num, case_num=0,min;
//	cin>>test;
//	char ch,des;
//	while(test--)
//	{
//		cin>>n>>length;
//		min=length;
//		str.push_back(0);
//		for(int k=1; k<=n; k++)
//		{
//			cin>>des>>ch>>num;
//			if(des=='B'){
//				stone.push_back(des);
//				str.push_back(num);
//			}
//		}
//		str.push_back(length);
//		for(int k=1; k<str.size(); k++)
//		{
//				num=(str[k]-str[k-1]);
//				arr.push_back(num);
//		}
//		sort(arr.begin(),arr.end());
//		if(arr.size()>1)
//			cout<<arr[arr.size()-1]<<endl;
//		else
//			cout<<min<<endl;
//		arr.clear(),str.clear(),stone.clear();
//	}
//	return 0;
//}