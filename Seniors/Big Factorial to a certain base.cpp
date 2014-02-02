
vector<int> prime_num;
bool prime[10000005];
void seive(int n)
{
	for (int i = 0; i < n; i++)
	{
		prime[i]=true;
	}
	prime[0]=prime[1]=true;
	int x=(int)sqrt(double(n));
	for (int i = 2; i < x; i++)
	{
		if(prime[i])
		{
			prime_num.pb(i);
			for (int j = i*i; j < n; j+=i)
			{
				prime[j]=false;
			}
		}
	}
	for (int i = x; i < n; i++)
	{
		if(prime[i])
			prime_num.pb(i);
	}
}

int main()
{
	seive(10000000);
	int n,base;
	map<int,int>p;
	map<int,int>::iterator it;
	while (cin >> n >>base && (n|| base))
	{
		int temp=base,index=0;
		while (temp!=1)
		{
			if(temp%prime_num[index]==0){
				temp/=prime_num[index];
				p[prime_num[index]]++;
			}
			else
				index++;
		}
		int sum=0,Min=INF_MAX;
		for (it  = p.begin(); it!=p.end() ; it++)
		{
			sum=0;
			for (int i = 1; pow(it->first,i) <= n; i++)
			{
				sum+=n/pow(it->first,i);
			}
			sum=floor(double(sum)/double(it->second))+0.5;
			Min=min(Min,sum);
		}
		cout << Min << endl;
		p.clear();
	}
	return 0;
}