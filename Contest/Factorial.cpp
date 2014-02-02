//#include<stdio.h>
//#include<iostream>
//using namespace std;
//
//long long zero(long long number,long long factor){
//	long long total,deno;
//	if(number==5) return 1;
//	total=0;
//	deno=factor;
//	while(deno<number){
//		total+=number/deno;
//		deno*=factor;
//	}
//	return total;
//}
///*******************************************************************/
//int main(){
//	long long n,c2,c1,t;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		c1=zero(n,2);
//		c2=zero(n,5);
//		if(c1<c2) printf("%ld\n",c1);
//		else printf("%ld\n",c2);
//	}
//	return 0;
//}