#include<bits/stdc++.h>
using namespace std;
double s,v=2.0;
int ans=0;
int main(){
	scanf("%lf",&s);
	while(s>0.0){
		ans++;
		s-=v;
		v*=0.98;
//		cout<<s<<" "<<v<<" ";
	}
	printf("%d\n",ans);
}
