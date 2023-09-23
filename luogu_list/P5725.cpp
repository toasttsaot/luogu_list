#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	scanf("%d",&n);
	int cnt=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(cnt<10){
				printf("0");
			}
			printf("%d",cnt++);
		}
		printf("\n");
	}
	printf("\n");
	cnt=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			if(cnt<10){
				printf("0");
			}
			printf("%d",cnt++);
		}
		printf("\n");
	}
}
