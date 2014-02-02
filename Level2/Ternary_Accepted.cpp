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
//	int N,x;
//	stack<int> my_stack;
//	while((cin>>N)&&(N>=0))
//	{
//		if(N==0)
//		{
//			cout<<"0\n";
//			continue;
//		}
//		x=N;
//		while(x>0)
//		{
//			my_stack.push(x%3);
//			x/=3;
//		}
//		while(!my_stack.empty())
//		{
//			cout<<my_stack.top();
//			my_stack.pop();
//		}
//		cout<<endl;
//	}
//	return 0;
//}