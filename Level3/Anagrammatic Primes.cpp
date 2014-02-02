//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//using namespace std;
//
//bool prime[20000000],Anagrammatic_nums[10000000];
//int prime_nums[1000000],k=0,num_digits[8],Anagrammatics[5042];
//
//void sieve() 
//{
//	for( int i = 0; i < 20000000; ++i )
//		prime[i] = true;
//	prime[0] = prime[1] = false;
//	int N = (int)sqrt(double(20000000));
//	for( int i = 2; i < N ; ++i )
//		if (prime[i])
//		{
//			prime_nums[k++]=i;
//			for( int j = i*i; j < 20000000; j += i )
//				prime[j] = false;
//		}
//}
//
//void Anagrammatic()
//{
//	for(int i=0; i<k; i++)
//	{
//		int num,digits,temp,counter;
//		bool here=true;
//		num=prime_nums[i],digits=0,counter=0;
//		while(num)
//		{
//			num_digits[digits]=num%10;
//			num/=10;
//			digits++;
//		}
//		sort(num_digits,num_digits+digits);
//		do 
//		{
//			temp=0;
//			for(int j=0; j<digits; j++)
//			{	
//				temp*=10;
//				temp+=num_digits[j];
//			}
//			if(!prime[temp])
//			{
//				here=false;
//				break;
//			}
//			Anagrammatics[counter++]=temp;
//		} while ( next_permutation (num_digits,num_digits+digits) );
//		if(here)
//		{
//			for(int j=0; j<counter; j++)
//				Anagrammatic_nums[Anagrammatics[j]]=true;
//		}
//	}
//}
//
//int main()
//{
//	sieve();
//
//	Anagrammatic();
//	int counter,T,var;
//	while(cin>>T&& T)
//	{
//		counter=0,var=T;
//		if(T<1000)
//		{
//			while(var)
//			{
//				counter++;
//				var/=10;
//			}
//			var=pow(10,(double)counter),counter=0;
//			for(int i=T+1; i<var; i++)
//			{
//				if(Anagrammatic_nums[i]){counter=i;break;}
//			}
//		}
//		cout<<counter<<endl;
//	}
//	return 0;
//}