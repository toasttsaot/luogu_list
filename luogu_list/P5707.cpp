#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,v;
	cin>>s>>v;
	int mm=(s%v==0?s/v:s/v+1);
	mm+=10;
	int h=7,m=60;
	h-=mm/60;
	m-=mm%60;
	if(m==60){
		m=0;
		h++;
	}
	if(h<0){
		h+=24;
	}
	if(h<10){
		if(m<10){
			printf("0%d:0%d\n",h,m);
		}
		else{
			printf("0%d:%d\n",h,m);
		}
	}
	else{
		if(m<10){
			printf("%d:0%d\n",h,m);
		}
		else{
			printf("%d:%d\n",h,m);
		}
	}
}
