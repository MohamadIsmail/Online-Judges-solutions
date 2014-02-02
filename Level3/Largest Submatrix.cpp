//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int m,arr[26][26],line[26] ,temp ,max_so_far, Max,case_num;
//	cin>>case_num;
//	//scanf("%d",case_num);
//	while(case_num--)
//	{
//		cin.ignore();
//		char str[30];
//		cin>>str;
//		//scanf("%d",str);
//		m=strlen(str), max_so_far=0;
//		for(int i=0;i<m;i++) 
//		{
//			arr[0][i]=str[i]-'0';
//			if(arr[0][i]==0)
//				arr[0][i]=-100000;
//		}
//		for(int i=1;i<m;i++)
//		{
//			cin>>str;
//		    //scanf("%d",str);
//			for(int j=0;j<m;j++) 
//			{	
//				arr[i][j]=str[j]-'0';
//				if(arr[i][j]==0)
//					arr[i][j]=-100000;
//			}
//		}
//		for(int i=0; i<m; i++)
//		{
//			memset(line,0,sizeof(line));
//			for(int j=i; j<m; j++)
//			{
//				temp=0,Max=1<<31;
//				for(int k=0; k<m; k++)
//				{
//					line[k]+=arr[j][k];
//					temp+=line[k];
//					Max=max(temp,Max);
//					if(temp<0)
//						temp=0;
//				}
//				max_so_far=max(max_so_far,Max);
//			}
//		}
//		printf("%d\n",max_so_far);
//		if(case_num)
//			printf("\n");
//	}
//	return 0;
//}