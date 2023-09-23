#include<bits/stdc++.h>
using namespace std;
int n;
const int N=110;
struct P{
	string nam;
	int y,m,d;
	int num;
}p[N];
bool cmp(P a,P b){
	if(a.y==b.y){
		if(a.m==b.m){
			if(a.d==b.d){
				return a.num>b.num;
			}
			return a.d<b.d;
		}
		return a.m<b.m;
	}
	return a.y<b.y;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>p[i].nam;
		scanf("%d%d%d",&p[i].y,&p[i].m,&p[i].d);
		p[i].num=i;
	}
	sort(p+1,p+1+n,cmp);
	for(int i=1;i<=n;i++){
		cout<<p[i].nam<<"\n";
	}
}
