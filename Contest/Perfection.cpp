//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int N,count=0,sum;
//	while(scanf("%ld",&N)==1)
//	{
//		if(N==0)
//		{
//			printf("END OF OUTPUT\n");
//			break;
//		}
//		sum=1;
//		if(!count)
//		{
//			cout<<"PERFECTION OUTPUT\n";
//			count++;
//		}
//		for(int i=2;i<=N/2; i++)
//			if(N%i==0)
//				sum+=i;
//
//		if(N>sum)
//			printf("%5ld DEFICIENT\n",N);
//		else if(N==sum)
//			printf("%5ld PERFECT\n",N);
//		else 
//			printf("%5ld ABUNDANT\n",N);
//	}
//	return 0;
//}