//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//long long n,m,l;
//vector<long long>str;
//
//bool odd (long long x)
//{
//	if ( x < 0 ) x *= -1;
//	if ( x % 2 ) return true;
//	return false;
//}
//bool even (long long x)
//{
//	if ( x < 0 ) x *= -1;
//	if ( x % 2 == 0 ) return true;
//	return false;
//}
//bool Case(long long elem1, long long elem2)
//{
//	return elem1%m<elem2%m;
//}
//bool Case1(long long elem1, long long elem2)
//{
//	return elem1%m==elem2%m && odd(elem1) && even(elem2);
//}
//bool Case2(long long elem1 ,long long elem2)
//{
//	return elem1%m==elem2%m && odd(elem1) && odd(elem2) && elem1>elem2;
//}
//bool Case3(long long elem1 ,long long elem2)
//{
//	return elem1%m==elem2%m && even(elem1) && even(elem2) && elem1<elem2;
//}
//
//int main ()
//{
//	while(cin>>n>>m)
//	{
//		cout<<n<<" "<<m<<endl;
//		if(n==0 && m==0)break;
//		for(int i=0; i<n; i++)
//		{
//			cin>>l;
//			str.push_back(l);
//		}
//		sort( str.begin(), str.end(), Case);
//		sort( str.begin(), str.end(), Case1);
//		sort( str.begin(), str.end(), Case2);
//		sort( str.begin(), str.end(), Case3);
//		for(int i=0; i<n; i++)
//			cout<<str[i]<<endl;
//		str.clear();
//	}
//	return 0;
//}