//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<utility>
//using namespace std;
//
//vector< pair<double,double> >Cost , res, little;
//
//
//bool sorting(pair<double,double>elem1 ,pair<double,double> elem2)
//{
//	if(elem1.first==elem2.first)
//		return elem1.second > elem2.second;
//	else
//		return elem1.first < elem2.first;
//}
//
//int main()
//{
//	double test ,length,st,fin;
//	cin>>test;
//	while(test--)
//	{
//		cin.ignore();
//		cin>>length;
//		while(cin>>st>>fin)
//		{
//			if(!st && !fin)break;
//			pair<double,double> coord(st,fin);
//			Cost.push_back(coord);
//		}
//		sort(Cost.begin(),Cost.end());
//		sort(Cost.begin(),Cost.end(),sorting);
//		double end=0;
//		bool temp=true;
//		for(int k=0; k<Cost.size(); k++)
//		{
//			if(end>=length)
//				break;
//			if(Cost[k].first>end)
//			{
//				if(little.empty())
//				{
//					Cost.clear(),res.clear();
//					temp=false;
//					break;
//				}
//				res.push_back(little[little.size()-1]);
//				end=little[little.size()-1].second;
//				little.clear();
//				k--;
//			}
//			if(Cost[k].second>end)
//			{
//				little.push_back(Cost[k]);
//				if(little.size()>1 && little[little.size()-2].second > little[little.size()-1].second)
//					swap(little[little.size()-2],little[little.size()-1]);
//			}
//			if(k==Cost.size()-1 && !little.empty())
//			{
//				res.push_back(little[little.size()-1]);
//				end=little[little.size()-1].second;
//				little.clear();
//				k--;
//			}
//		}
//		cout<<res.size()<<endl;
//		if(!temp)
//			continue;
//		for(int k=0; k<res.size(); k++)
//		{
//			cout<<res[k].first<<" "<<res[k].second<<endl;
//		}
//		if(test)
//			cout<<endl;
//		Cost.clear(),res.clear();
//	}
//	return 0;
//}