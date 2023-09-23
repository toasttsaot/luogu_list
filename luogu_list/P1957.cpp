#include<bits/stdc++.h>
using namespace std;
int n;
int wei(int x){
	if(x==0) return 1;
	if(x<0){
		return wei(-x)+1;
	}
	int res=0;
	while(x){
		x/=10;
		res++;
	}
	return res;
}
int a,b;
int tp;
string s1;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>s1;
		if(s1[0]>='a'&&s1[0]<='c'){
			tp=s1[0]-'a';
			cin>>a>>b;
		}
		else{
			a=atoi(s1.c_str());
			cin>>b;
		}
		if(tp==0){
			printf("%d+%d=%d\n",a,b,a+b);
			printf("%d\n",wei(a)+wei(b)+wei(a+b)+2);
		}
		else if(tp==1){
			printf("%d-%d=%d\n",a,b,a-b);
			printf("%d\n",wei(a)+wei(b)+wei(a-b)+2);
		}
		else{
			printf("%d*%d=%d\n",a,b,a*b);
			printf("%d\n",wei(a)+wei(b)+wei(a*b)+2);
		}
	}
}
