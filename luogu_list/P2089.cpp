#include<bits/stdc++.h>
using namespace std;
vector<int> now;
int ans=0;
int n;
void dfs1(int d){
	if(d>10){
		int sum=0;
		for(int i=0;i<now.size();i++){
			sum+=now[i];
		}
		if(sum==n){
			ans++;
		}
		return;
	}
	for(int i=1;i<=3;i++){
		now.push_back(i);
		dfs1(d+1);
		now.pop_back();
	}
	return;
}
void dfs2(int d){
	if(d>10){
		int sum=0;
		for(int i=0;i<now.size();i++){
			sum+=now[i];
		}
		if(sum==n){
			ans++;
			for(int i=0;i<now.size();i++){
				printf("%d ",now[i]);
			}
			printf("\n");
		}
		return;
	}
	for(int i=1;i<=3;i++){
		now.push_back(i);
		dfs2(d+1);
		now.pop_back();
	}
	return;
}
int main(){
	scanf("%d",&n);
	if(n<10||n>30){
		printf("0\n");
		return 0;
	}
	dfs1(1);
	printf("%d\n",ans);
	dfs2(1);
}
