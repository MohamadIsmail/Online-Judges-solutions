// #include<iostream>
// #include<algorithm>
// using namespace std;
//
// int arr[5];
// bool flag;
//
// void Operation(int Index ,int result)
// {
// 	if(Index==5)
// 	{
// 		if(result==23)flag=true;
// 		return;
// 	}
// 	Operation(Index+1,result+arr[Index]);
// 	Operation(Index+1,result-arr[Index]);
// 	Operation(Index+1,result*arr[Index]);
// }
//
// int main()
// {
// 	while(cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4])
// 	{
// 		if(arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==0 && arr[4]==0)break;
//
// 		flag=false;
// 		sort(arr,arr+5);
// 		do {
//     			Operation(1 , arr[0]);
// 			if(flag)break;
// 		}while(next_permutation(arr,arr+5));
// 		if(flag)
// 			cout<<"Possible\n";
// 		else
// 			cout<<"Impossible\n";
// 	}
// 	return 0;
// }
