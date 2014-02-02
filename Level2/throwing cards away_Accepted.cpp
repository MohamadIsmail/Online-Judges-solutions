//#include<iostream>
//#include<map>
//#include<stack>
//#include<isqueue>
//#include<set>
//
//using namespace std;
//
//int main()
//{
//	isqueue<int> my;
//	int n;
//	while((cin>>n)&&(n!=0))
//	{
//		for(int i=1; i<=n; i++)
//			my.push(i);
//		cout<<"Discarded cards:";
//		while(my.size()!=1)
//		{
//			cout<<" "<<my.front();
//			if(my.size()!=2)
//				cout<<",";
//			my.pop();
//			my.push(my.front());
//			my.pop();
//		}
//		cout<<"\nRemaining card: "<<my.front()<<endl;
//		my.pop();
//	}
//	return 0;
//}