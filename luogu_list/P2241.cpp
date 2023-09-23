#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
ll calc_f(){
	ll res=0;
	for(int i=1;i<=min(n,m);i++){
		res+=(n-i+1)*(m-i+1);
	}
	return res;
}
ll calc_j(){
	ll res=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			res+=(n-i+1)*(m-j+1);
		}
	}
	return res;
}
int main(){
	scanf("%lld%lld",&n,&m);
	printf("%lld %lld\n",calc_f(),calc_j()-calc_f());
}
