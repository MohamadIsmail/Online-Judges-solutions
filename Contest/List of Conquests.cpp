//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int T,i;
//	cin>>T;
//	cin.ignore();
//	map<string ,int> mymap;
//	map<string ,int>::iterator it;
//	string arr, str,vec;
//	while(T--)
//	{
//		getline(cin,arr);
//		for(i=0; i<arr.size(); i++)
//			if(arr[i]==' ')break;
//		str = arr.substr(0,i);
//		it=mymap.find(str);
//		if(it==mymap.end())
//			mymap[str]=1;
//		else
//			mymap[str]++;
//	}
//	for(it=mymap.begin() ; it!=mymap.end() ; it++)
//	{
//		cout<<it->first<<" "<<it->second<<endl;
//	}
//	return 0;
//}