#include<bits/stdc++.h>
using namespace std;
int n;
bool is_p(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
//	cout<<is_p(8);
	scanf("%d",&n);
	int cnt=2;
	int num=0;
	if(n<2){
		printf("0\n");
		return 0;
	}
	while(n>=0){
		if(is_p(cnt)){
			if(n>=cnt){
				printf("%d\n",cnt);
				n-=cnt;
				num++;
			}
			else{
				break;
			}
		}
		cnt++;
	}
	printf("%d\n",num);
}//p 2 3
//vis 0 0 0 1 0 1 1 1 0 1 1 1
