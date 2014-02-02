//#include<iostream>
//#include<cmath>
//#include<algorithm>
//#include<utility>
//using namespace std;
//
//
//pair<double,int> Cost[1001];
//
//int main()
//{
//	int test ,n;
//	double elem1,elem2;
//	cin>>test;
//	while(test--)
//	{
//		cin.ignore();
//		cin>>n;
//		int index=0;
//		for(int i=0; i<n; i++)
//		{
//			cin>>elem1>>elem2;
//			Cost[i].first=elem1/elem2;
//			Cost[i].second=++index;
//		}
//		sort(Cost,Cost+n);
//		for(int i=0; i<n; i++)
//		{
//			cout<<Cost[i].second;
//			if(i!=n-1)
//				cout<<" ";
//		}
//		cout<<endl;
//		if(test)
//			cout<<endl;
//	}
//	return 0;
//}