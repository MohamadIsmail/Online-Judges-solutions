//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<cmath>
//using namespace std;
//
//string arr[5001];
//
//string sum(string str1, string str2)
//{
//	string arr;
//	string::iterator it;
//	int n=0,i;
//	if(str1.size()>str2.size())
//	{
//		/*reverse(str2.begin(),str2.end());
//		for(i=str1.size()-1,it=str2.begin(); i>=0, it < str2.end(); it++,i--)
//		{
//			int m=n/10;
//			n=(str1[i]-'0')+(*it-'0')+m;
//			char c=(char)n%10+48;
//			arr+=c;
//		}
//		if(n/10>0)
//			arr+=(char)n/10+48+(str1[i]-'0');
//		arr+=str1.substr(0,i+1);*/
//		str1.swap(str2);
//	}
//	if(str1.size()<str2.size())
//	{
//		reverse(str1.begin(),str1.end());
//		it=str1.begin();
//		for( i=str2.size()-1 ; i>=0 ; i--)
//		{
//			int m=n/10;
//			if(it != str1.end())
//			{
//				n=(str2[i]-'0')+(*it-'0')+m;
//				it++;
//			}
//			else
//				n=(str2[i]-'0')+m;
//			char c=(char)n%10+48;
//			arr+=c;
//		}
//		if(n/10>0)
//			arr+=(char)n/10+48;
//	}
//	else
//	{
//		for(int i=str2.size()-1; i>=0; i--)
//		{
//			int m=n/10;
//			n=(str1[i]-'0')+(str2[i]-'0')+m;
//			char c=(char)n%10+48;
//			arr+=c;
//		}
//		if(n/10>0)
//			arr+=(char)n/10+48;
//	}
//	reverse(arr.begin(),arr.end());
//	return arr;
//}
//
//void sieve() 
//{
//	arr[0]="0",arr[1]="1";
//	for( int i = 2; i <= 5000 ; i++ )
//		arr[i]=sum(arr[i-1],arr[i-2]);
//}
//
//int main()
//{
//	sieve();
//	int T;
//	while(cin>>T)
//	{
//		cout <<"The Fibonacci number for "<<T<<" is "<< arr[T] << endl;
//	}
//	return 0;
//}