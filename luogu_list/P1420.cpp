#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
int n;
int a[N];
int main(){
	scanf("%d",&n);;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
//	sort(a+1,a+1+n);
//	n=unique(a+1,a+1+n)-a-1;
//	cout<<n<<"\n";
	int ans=1;
	int cnt=1;
	for(int i=2;i<=n;i++){
		if(a[i]==a[i-1]+1){
			cnt++;
		}
		else{
			ans=max(ans,cnt);
			cnt=1;
		}
	}
	ans=max(cnt,ans);
	printf("%d\n",ans);
}
