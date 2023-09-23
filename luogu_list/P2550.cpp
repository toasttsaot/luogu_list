#include<bits/stdc++.h>
using namespace std;
int n;
int num[1010][10];
int ans[10]={};
int main(){
	scanf("%d",&n);
	for(int i=1;i<=7;i++){
		scanf("%d",&num[0][i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=7;j++){
			scanf("%d",&num[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		int res=0;
		for(int j=1;j<=7;j++){
			for(int k=1;k<=7;k++){
				if(num[0][k]==num[i][j]){
					res++;
				}
			}
		}
		ans[7-res]++;
	}
	for(int i=0;i<=6;i++){
		printf("%d ",ans[i]);
	}
}
