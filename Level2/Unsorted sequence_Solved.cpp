//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main ()
//{
//	int t,n,r;
//	vector<int> d;
//	cin>>t;
//	for(int e=1;e<=t;e++)
//	{
//		cin>>n;
//		bool x=false;
//		for(int i=0; i<n; i++)
//		{
//			cin>>r;
//			d.push_back(r);
//		}
//		for(int i=0; i<d.size()-1; i++)
//		{
//			if(d[i]!=d[i+1])
//			{
//				x=true;
//				break;
//			}
//		}
//		if(x==false)
//		{
//			cout<<"Test #"<<e<<": Invalid Sequence.\n";
//			d.clear();
//			continue;
//		}
//		sort(d.begin(),d.end());
//		swap(d[d.size()-1],d[d.size()-2]);
//		for(int i=d.size()-1; i>0; i--)
//		{
//			if(d[i]>d[i-1])
//			{
//				swap(d[i],d[i-1]);
//				break;
//			}
//			if(d[i]<d[i-1])break;
//		}
//		cout<<"Test #"<<e<<": ";
//		for(int i=0; i<d.size(); i++)
//		{
//			if(i==d.size()-1)
//				cout<<d[i]<<".\n";
//			else
//				cout<<d[i]<<", ";
//		}
//		d.clear();
//	}
//	return 0;
//}