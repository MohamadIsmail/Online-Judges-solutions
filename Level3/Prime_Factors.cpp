// #include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<vector>
//#include<map>
//#include<cstdio>
//using namespace std;
//
//bool prime [1000009];
//long long k=0,prime_nums[20000],counter;
//
//void sieve() 
//{
//	for( long long i = 0; i < 1000009; ++i )
//		prime[i] = true;
//	prime[0] = prime[1] = false;
//	long long N = (long long)sqrt(double(1000009));
//	for( long long i = 2; i < N ; ++i )
//		if (prime[i])
//		{
//			prime_nums[k++]=i;
//			for( long long j = i*i; j < 1000009; j += i )
//				prime[j] = false;
//		}
//}
//
//void factorization(long long num)
//{
//	long long index=0;
//	while(index<k && prime_nums[index]*prime_nums[index]<=num)
//	{
//		if(num%prime_nums[index] == 0)
//		{
//			if(counter==0)
//				printf(" %lld",prime_nums[index]);
//			else
//				printf(" x %lld",prime_nums[index]);
//			counter++;
//			num/=prime_nums[index];
//		}		
//		else
//			index++;
//	}
//	if(num>1)
//	{
//		if(counter==0)
//			printf(" %lld",num);
//		else
//			printf(" x %lld",num);
//	}
//}
//
//int main()
//{
//	long long n;
//	sieve();
//	while(cin>>n && n)
//	{
//		counter=0;
//		cout<<n<<" =";
//		if(n<0)
//		{
//			counter++;
//			n*=-1;
//			printf(" %d",-1);
//		}
//		factorization(n);
//		printf("\n");
//	}
//	return 0;
//}
//////////////////////
//#include<iostream> 
//#include<vector> 
//#include<fstream> 
//using namespace std; 
//int gcd(int a, int b) 
//{ 
//	int r=1; 
//	if(a>b) 
//	{ 
//		while ( r!=0) 
//		{ 
//			r=a%b; 
//			a=b; 
//			b=r; 
//		}	 
//		return a; 
//	} 
//	else if ( b>a) 
//	{ 
//		while (r!=0) 
//		{ 
//			r=b%a; 
//			b=a; 
//			a=r; 
//		} 
//		return b; 
//	} 
//	else if ( a==b) 
//		return a; 
//} 
//int lcm(int a, int b) 
//{ 
//	return a*b/gcd(a,b); 
//} 
//bool isprime(int a) 
//{ 
//	if(a==2) return true; 
//	else 
//	{ 
//		for(int i=2;i<a/2+1;++i) {
//			if(a%i==0) return false; 
//			if(i==a/2) return true;} 
//	} }
//
//int main() 
//{ 
//	int a=5,b=2500; 
//	cout<<"GCD = "<<gcd(a,b)<<endl; 
//	cout<<"LCM = "<<lcm(a,b)<<endl; 
//	if(!isprime(b)) cout<<"not prime"<<endl; 
//	vector <int> p = 
//		primefactors(b); 
//	for(int i=0;i<p.size();++i) 
//		cout<<p[i]<<endl; 
//	return 0; 
//}
 