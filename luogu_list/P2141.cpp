#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n;
int a[110];
int vis[N];
int main(){
	memset(vis,0,sizeof vis);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			vis[a[i]+a[j]]=1;
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=vis[a[i]];
	}
	printf("%d\n",ans);
}
