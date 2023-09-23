#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e4+10;
ll s=0ll,b,n;
ll h[N];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	scanf("%lld%lld",&n,&b);
	for(int i=1;i<=n;i++){
		scanf("%lld",&h[i]);
	}
	sort(h+1,h+1+n,cmp);
	ll cnt=1;
	while(s<b){
		s+=h[cnt++];
	}
//	cout<<s<<"\n";
	printf("%lld\n",cnt-1);
}
