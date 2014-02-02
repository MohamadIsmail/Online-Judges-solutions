//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	map <int,int> my;
//	vector <int> myvec;
//	map<int,int>::iterator it;
//	int n;
//	while(cin>>n)
//	{
//		it=my.find(n);
//		if(it==my.end())
//		{
//			my[n]=1;
//			myvec.push_back(n);
//		}
//		else
//			my[n]++;
//	}
//	for(int i=0; i<myvec.size(); i++)
//	{
//		it=my.find(myvec[i]);
//		cout<<myvec[i]<<" "<<(*it).second<<endl;
//	}
//	return 0;
//}