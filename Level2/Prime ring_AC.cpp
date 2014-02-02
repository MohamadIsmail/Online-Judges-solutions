#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

bool visited[50],prime[33];
vector<int> vec;


void sieve()
{
	for( int i = 0; i <=32; i++ )
		prime[i] = true;
	prime[0] = prime[1] = false;
	int N = (int)sqrt(double(32));
	for( int i = 2; i <=N ; i++ )
		if (prime[i])
		{
			for( int j = i*i; j <=32; j += i )
				prime[j] = false;
		}
}

bool checked(int end)
{
    for(int i=2 ; i<=end ; i++)
	{
	    if(visited[i]==false)
	        return false;
	}
	return true;
}

void seq(int end,int index)
{
    if(checked(end) && prime[index+1])
    {
        for(int i=0; i<end ;i++)
        {
            if( i != end-1 )
                cout<<vec[i]<<" ";
            else
                cout<<vec[i]<<endl;
        }
        return;
    }
	for(int i=2;i<=end;i++)
	{
		if(prime[index+i] && !visited[i])
		{
		    visited[i] = true;
		    vec.push_back(i);
		    seq(end,i);
		    visited[i] = false;
		    vec.pop_back();
		}
	}
}

int main()
{
    sieve();
	int n,case_num=0;
	while(cin>>n)
	{
		vec.push_back(1);
		for(int i=0; i<50; i++)
		    visited[i]=false;
		if(!case_num)
		    cout<<"Case "<<++case_num<<":\n";
		else
		    cout<<"\nCase "<<++case_num<<":\n";
		seq(n,1);
		vec.clear();
    }
	return 0;
}
