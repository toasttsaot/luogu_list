#include<bits/stdc++.h>
using namespace std;
const int N=210;
int n;
int ans[N][N];
int main(){
	scanf("%d",&n);
	int num;
	int tag=0;
	int x=1,y=1;
	while(~scanf("%d",&num)){
		while(num--){
			ans[x][y]=tag;
//			cout<<x<<" "<<y<<'\n';
			y++;
			if(y>n){
				y=1;
				x++;
			}
		}
		tag=1-tag;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d",ans[i][j]);
		}
		printf("\n");
	}
}
