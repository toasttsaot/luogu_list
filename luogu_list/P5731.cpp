#include<bits/stdc++.h>
using namespace std;
int n;
int a[15][15]={};
int main(){
	scanf("%d",&n);
	int x=1,y=1;
	int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
	int px=0,py=0;
	for(int i=1;i<=n*n;i++){
//		cout<<x<<" "<<y<<"\n";
		a[x][y]=i;
		if(x+dx[px]<1||x+dx[px]>n||y+dy[py]<1||y+dy[py]>n||a[x+dx[px]][y+dy[py]]!=0){
			px++;
			px%=4;
			py++;
			py%=4;
		}
		x+=dx[px];
		y+=dy[py];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<setw(3)<<a[i][j];
		}
		printf("\n");
	}
}
