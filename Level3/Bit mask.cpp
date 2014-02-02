//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<utility>
//#include<cstring>
//#include<cmath>
//using namespace std;
//
//bool sorting(pair<unsigned int,unsigned int>elem1 ,pair<unsigned int,unsigned int> elem2)
//{
//	if(elem1.second==elem2.second)
//		return elem1.first < elem2.first;
//	else 
//		return elem1.second > elem2.second;
//}
//
//
//int main()
//{
//	vector< pair<unsigned int,unsigned int> > arr;
//	long long number, start ,end;
//	while(cin>>number >> start >>end)
//	{
//		/*for(unsigned int k=start; k<=end; k++)
//		{
//			int second=k|number;
//			pair<unsigned int, unsigned int>coord(k,second);
//			arr.push_back(coord);
//		}*/
//		long long dec=number,rem,i=1,sum=0;
//		do
//		{
//			rem=dec%2;
//			sum=sum + (i*rem);
//			dec=dec/2;
//			i=i*10;
//		}while(dec>0);
//		int num=0; 
//		for(double i=31; i>=0; i--)
//		{
//			num+=(int)pow(2,i);
//			if(num>end)
//				num-=(int)pow(2,i);
//			if(num<= end&& num >=start)
//				break;
//		}
//		cout<<num<<endl;
//	}
//	return 0;
//}		