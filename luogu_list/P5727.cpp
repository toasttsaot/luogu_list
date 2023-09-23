#include<bits/stdc++.h>
using namespace std;
int n,a[1100];
int cnt=0;
int main(){
	scanf("%d",&n);
	if(n==1){
		printf("1\n");
		return 0;
	}
	while(n!=1){
		a[cnt++]=n;
		if(n&1){
			n=n*3+1;
		}
		else{
			n>>=1;
		}
	}
	a[cnt++]=1;
//	printf("%d\n",a[0]);
	while(cnt>0){
		printf("%d ",a[--cnt]);
	}
	printf("\n");
}
