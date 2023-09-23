#include<bits/stdc++.h>
using namespace std;
string s;
string dic[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty","a","both","another","first","second","third"};
int v[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,1,2,1,1,2,3};
int num[20];
int cnt=0;
int main(){
	while(cin>>s){
		if(s=="."){
			break;	
		}
		for(int i=0;i<=26;i++){
			if(s==dic[i]){
				num[cnt++]=v[i]*v[i]%100;
			}
		}
	}
	if(cnt==0){
		printf("0\n");
	}
	else{
		bool f=1;
		sort(num,num+cnt);
		for(int i=0;i<cnt;i++){
			if(num[i]==0){
				continue;
			}
			else if(num[i]<10){
				if(f){
					printf("%d",num[i]);
					f=0;
				}
				else{
					printf("0%d",num[i]);
				}
			}
			else{
				printf("%d",num[i]);
			}
		}
	}
}
