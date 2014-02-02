//#include<iostream>
//using namespace std;
//char arr_1[1000][1000],arr_2[1000][1000];
//int main()
//{
//	int number,n,z;
//	bool q=true;
//	while(cin>>n)
//	{
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				cin>>arr_1[i][j];
//			}  
//		}
//		cout<<endl;
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				cin>>arr_2[i][j];
//			}  
//		}
//		// First case
//		for(int i=0;i<n;i++)
//		{
//			z=n-1;
//			for(int j=0;j<n;j++)
//			{
//				if(arr_1[j][i]!=arr_2[i][z-j])
//				{
//					q=false;
//					break;
//				}
//			}
//			if(q==false)
//			{
//				break;
//			}
//		}
//		if(q==true)
//		{
//			number=1;
//			cout<<number<<endl;
//			continue;
//		}
//		q=true;
//		// Second Case 
//		for(int i=0;i<n;i++)
//		{
//			z=n-1;
//			for(int j=0;j<n;j++)
//			{
//				if(arr_1[i][j]!=arr_2[z-i][z-j])
//				{
//					q=false;
//					break;
//				}
//			}
//			if(q==false)
//			{
//				break;
//			}
//		}
//		if(q==true)
//		{
//			number=2;
//			cout<<number<<endl;
//			continue;
//		}
//		q=true;
//		// Third Case
//		for(int i=0;i<n;i++)
//		{
//			z=n-1;
//			for(int j=0;j<n;j++)
//			{
//				if(arr_1[j][z-i]!=arr_2[i][j])
//				{
//					q=false;
//					break;
//				}
//			}
//			if(q==false)
//			{
//				break;
//			}
//		}
//		if(q==true)
//		{
//			number=3;
//			cout<<number<<endl;
//			continue;
//		}
//		q=true;
//		// Fourth Case
//		for(int i=0;i<n;i++)
//		{
//			z=n-1;
//			for(int j=0;j<n;j++)
//			{
//				if(arr_1[i][j]!=arr_2[i][z-j])
//				{
//					q=false;
//					break;
//				}
//			}
//			if(q==false)
//			{
//				break;
//			}
//		}
//		if(q==true)
//		{
//			number=4;
//			cout<<number<<endl;
//			continue;
//		}
//		q=true;
//		// Fifth Case
//		for(int i=0;i<n;i++)
//		{
//			z=n-1;
//			for(int j=0;j<n;j++)
//			{
//				if(arr_1[i][j]!=arr_2[z-j][z-i]&&arr_1[i][j]!=arr_2[j][i])
//				{
//					q=false;
//					break;
//				}
//			}
//			if(q==false)
//			{
//				break;
//			}
//		}
//		if(q==true)
//		{
//			number=5;
//			cout<<number<<endl;
//			continue;
//		}
//		q=true;
//		// Sixth Case
//		for(int i=0;i<n;i++)
//		{
//			z=n-1;
//			for(int j=0;j<n;j++)
//			{
//				if(arr_1[i][j]!=arr_2[i][j])
//				{
//					q=false;
//					break;
//				}
//			}
//			if(q==false)
//			{
//				break;
//			}
//		}
//		if(q==true)
//		{
//			number=6;
//			cout<<number<<endl;
//			continue;
//		}
//		q=true;
//		if(q==true)
//		{
//			number=7;
//			cout<<number<<endl;
//			continue;
//		}
//	}
//	return 0;
//}