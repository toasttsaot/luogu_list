#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200][200];
double calc(int x){
	int maxx=-1,minn=0x3f3f3f3f;
	for(int i=1;i<=m;i++){
		maxx=max(maxx,a[x][i]);
		minn=min(minn,a[x][i]);
	}
	double sum=0.0;
	for(int i=1;i<=m;i++){
		sum+=(double)a[x][i];
	}
	sum-=(double)(maxx+minn);
	return sum/((double)(m-2));
}
int main(){
	scanf("%d%d",&n,&m);
	double ans=-1.0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
		ans=(ans<calc(i)?calc(i):ans);
	}
	printf("%.2lf",ans);
}
