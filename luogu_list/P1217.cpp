#include<bits/stdc++.h>
using namespace std;
int a,b;
bool is_p(int x){
	if(x==1) return 0;
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
bool check(int x){
	return is_p(x)&&x>=a&&x<=b;
}
int main(){
	scanf("%d%d",&a,&b);
	for(int d1=5;d1<=9;d1+=2){
		if(check(d1)){
			printf("%d\n",d1);
		}
	}
	for(int d1=1;d1<=9;d1+=2){
		if(check(d1*10+d1)){
			printf("%d\n",d1*10+d1);
		}
	}
	for(int d1=1;d1<=9;d1+=2){
		for(int d2=0;d2<=9;d2++){
			int num=d1*100+d2*10+d1;
			if(check(num)){
				printf("%d\n",num);
			}
		}
	}
	for(int d1=1;d1<=9;d1+=2){
		for(int d2=0;d2<=9;d2++){
			int num=d1*1000+d2*100+d2*10+d1;
			if(check(num)){
				printf("%d\n",num);
			}
		}
	}
	for(int d1=1;d1<=9;d1+=2){
		for(int d2=0;d2<=9;d2++){
			for(int d3=0;d3<=9;d3++){
				int num=d1*10000+d2*1000+d3*100+d2*10+d1;
				if(check(num)){
					printf("%d\n",num);
				}
			}
		}
	}
	for(int d1=1;d1<=9;d1+=2){
		for(int d2=0;d2<=9;d2++){
			for(int d3=0;d3<=9;d3++){
				int num=d1*100000+d2*10000+d3*1000+d3*100+d2*10+d1;
				if(check(num)){
					printf("%d\n",num);
				}
			}
		}
	}
	for(int d1=1;d1<=9;d1+=2){
		for(int d2=0;d2<=9;d2++){
			for(int d3=0;d3<=9;d3++){
				for(int d4=0;d4<=9;d4++){
					int num=d1*1000000+d2*100000+d3*10000+d4*1000+d3*100+d2*10+d1;
					if(check(num)){
						printf("%d\n",num);
					}
				}
			}
		}
	}
	for(int d1=1;d1<=9;d1+=2){
		for(int d2=0;d2<=9;d2++){
			for(int d3=0;d3<=9;d3++){
				for(int d4=0;d4<=9;d4++){
					int num=d1*10000000+d2*1000000+d3*100000+d4*10000+d4*1000+d3*100+d2*10+d1;
					if(check(num)){
						printf("%d\n",num);
					}
				}
			}
		}
	}
}
