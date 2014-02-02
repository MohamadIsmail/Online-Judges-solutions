//#include<iostream>
//#include<algorithm>
//#include <limits.h>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int n,budget,hotel,week,number,price,min;
//	while(cin>>n)
//	{
//		cin>>budget>>hotel>>week;
//		min=INT_MAX	;
//		for(int i=0 ; i<hotel ; i++)
//		{
//			cin>>price;
//			for(int j=0 ; j<week ; j++)
//			{
//				cin>>number;
//				if(price*n<=budget && number>=n)
//				{
//					if(price*n <min)
//						min=price*n;
//				}
//			}
//		}
//		if(min!=INT_MAX)
//			cout<<min<<endl;
//		else
//			cout<<"stay home\n";
//	}
//	return 0;
//}