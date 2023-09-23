#include<bits/stdc++.h>
using namespace std;
int n;
int yung[30][30]={};
int main(){
	scanf("%d",&n);
	yung[1][1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			yung[i][j]=yung[i-1][j-1]+yung[i-1][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",yung[i][j]);
		}
		printf("\n");
	}
}
