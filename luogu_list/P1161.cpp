#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
int n;
double a;
int t;
int light[N];
int main(){
	memset(light,0,sizeof light);
	scanf("%d",&n);
	while(n--){
		scanf("%lf%d",&a,&t);
		for(int i=1;i<=t;i++){
			light[(int)(a*i)]=1-light[(int)(a*i)];
		}
//		for(int i=1;i<=30;i++){
////			printf("%d ",light[i]);
////		}
//		printf("\n");
	}
	int i=1;
	while(1){
		if(light[i++]){
			break;
		}
	}
	printf("%d\n",i-1);
}
