#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];
int main(){
	n=12;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int cun=0;
	int lin=0;
	for(int i=1;i<=n;i++){
		lin+=300;
		if(lin<a[i]){
			printf("-%d\n",i);
			return 0;
		}
		lin-=a[i];
		cun+=(lin/100)*100;
		lin%=100;
	}
//	cout<<cun<<"\n";
	printf("%d\n",lin+cun*12/10);
}
