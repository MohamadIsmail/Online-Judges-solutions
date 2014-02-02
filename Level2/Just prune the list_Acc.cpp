//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//#define FOR(i, n) for(int i = 0; i < n; i++)
//
//map<int ,int> map1,map2;
//map<int ,int>::iterator it,iter;
//
//bool compare()
//{
//	if(map1.size()!=map2.size())
//		return false;
//	for(iter = map1.begin(),it = map2.begin(); iter!= map1.end(),it!= map2.end(); it++,iter++)
//	{
//		if(((*iter)).first != (*it).first)
//			return false;
//		if(((*iter)).second != (*it).second)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int T,n,m,l,counter;
//	cin>>T;
//	FOR(x,T)
//	{
//		counter=0;
//		cin>>n>>m;
//		FOR(i,n)
//		{
//			cin>>l;
//			it=map1.find(l);
//			if(it==map1.end())
//				map1[l]=1;
//			else
//				map1[l]++;
//		}
//		FOR(i,m)
//		{
//			cin>>l;
//			it=map2.find(l);
//			if(it==map2.end())
//				map2[l]=1;
//			else
//				map2[l]++;
//		}
//		if (compare())
//		{
//			cout <<"0\n";
//			continue;
//		}
//		for(iter = map1.begin(); iter!= map1.end(); iter++)
//		{
//			int diff=iter->first;
//			it=map2.find(diff);
//			if(it!=map2.end())
//				counter+=abs((*iter).second - (*it).second);
//			else
//				counter+=(*iter).second;
//		}
//		for(iter = map2.begin(); iter!= map2.end(); iter++)
//		{
//			int diff=(*iter).first;
//			it=map1.find(diff);
//			if(it==map1.end())
//				counter+=(*iter).second;
//		}
//		cout <<counter<< "\n";
//		map1.clear();
//		map2.clear();
//	}
//	return 0;
//}