#include<iostream>
#include<string>
using namespace std;

void Matrices()
{
	int t;
	cin>>t;
	for(int i=1; i<=t; i++)
	{
		string op;
		int arr[10][10],str[10][10],n,r,o,j,m,l,x,y;
		char ch;
		cin>>n;
		if(n>9)break;
		for( j=0; j<n; j++)
		{
			for( l=0; l<n; l++)
			{
				cin >> ch;
				arr[j][l]=ch-'0';
			}
		}
		cin >> m;
		for( r=0; r<m; r++)
		{
			cin>>op;
			if(op=="row")
			{
				cin>>x>>y;
				x-=1,y-=1;
				for( j=0; j<n; j++)
				{
					str[x][j]=arr[y][j];
					str[y][j]=arr[x][j];
					arr[x][j]=str[x][j];
					arr[y][j]=str[y][j];
				}
			}
			if(op=="col")
			{
				cin>>x>>y;
				x-=1,y-=1;
				for( j=0; j<n; j++)
				{
					str[j][x]=arr[j][y];
					str[j][y]=arr[j][x];
					arr[j][x]=str[j][x];
					arr[j][y]=str[j][y];
				}
			}
			if(op=="inc")
			{
				for( j=0; j<n; j++)
				{
					for( l=0; l<n; l++)
					{
						arr[j][l]++;
						if(arr[j][l]==10)
							arr[j][l] = 0;
					}
				}
			}
			if(op=="dec")
			{
				for( j=0; j<n; j++)
				{
					for( l=0; l<n; l++)
					{
						arr[j][l]--;
						if(arr[j][l]==-1)
							arr[j][l] = 9;
					}
				}
			}
			if(op=="transpose")
			{
				for ( int l=0 ; l<n ; l++ )
					for ( int k=0 ; k<n ; k++ )
						str[l][k]=arr[k][l];
				for ( int l=0 ; l<n ; l++ )
					for ( int k=0 ; k<n ; k++ )
						arr[l][k]=str[l][k];
			}
		}
		cout<<"Case #"<<i<<endl;
		for( j=0; j<n; j++)
		{
			for( l=0; l<n; l++)
				cout << arr[j][l];
			cout<<endl;
		}
		cout<<endl;
	}
}

int main()
{
	Matrices();
	return 0;
}