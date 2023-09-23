#include<bits/stdc++.h>
using namespace std;
int a,b,c;
bool vis[20];
bool f=0;
bool check(int x,int y,int z){
	while(x){
		vis[x%10]=1;
		x/=10;
	}
	while(y){
		vis[y%10]=1;
		y/=10;
	}
	while(z){
		vis[z%10]=1;
		z/=10;
	}
	for(int i=1;i<=9;i++){
		if(!vis[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	scanf("%d%d%d",&a,&b,&c);
	int cnt=1;
	while(cnt*c<1000){
		if(cnt*a<100){
			cnt++;
			continue;
		}
//		cout<<"test\n";
		memset(vis,0,sizeof vis);
		if(check(a*cnt,b*cnt,c*cnt)){
			f=1;
			printf("%d %d %d\n",a*cnt,b*cnt,c*cnt);
		}
		cnt++;
	}
	if(!f){
		printf("No!!!\n");
	}
}
