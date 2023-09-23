#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,m,k;
int a[N][N];
void check(int x,int y){
	if(x>0&&x<=n&&y>0&&y<=n){
		a[x][y]=1;
	}
}
void huo(int x,int y){
	check(x-2,y);
	check(x-1,y);
	check(x,y);
	check(x+2,y);
	check(x+1,y);
	check(x,y+1);
	check(x,y+2);
	check(x,y-1);
	check(x,y-2);
	check(x-1,y-1);
	check(x-1,y+1);
	check(x+1,y+1);
	check(x+1,y-1);
}
void yin(int x,int y){
	for(int i=x-2;i<=x+2;i++){
		for(int j=y-2;j<=y+2;j++){
			check(i,j);
		}
	}
}
int main(){
	scanf("%d%d%d",&n,&m,&k);
	memset(a,0,sizeof a);
	int x,y;
	for(int i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
		huo(x,y);
	}
	for(int i=1;i<=k;i++){
		scanf("%d%d",&x,&y);
		yin(x,y);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==0){
				ans++;
			}
		}
	}
	printf("%d\n",ans);
}
