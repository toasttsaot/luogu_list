#include<bits/stdc++.h>
using namespace std;
string s[210];
int n=100;
int main(){
	int cnt=0;
	int pre=0;
	bool f=1;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		n=s[i].size();
		if(i==1) printf("%d ",n);
		if(s[1][0]=='1'&&f){
		    printf("0 ");
		    pre=1;
		    f=0;
		}
		for(int j=0;j<n;j++){
			if(cnt==0){
				cnt++;
				continue;
			}
			if(pre==s[i][j]-'0'){
				cnt++;
			}
			else{
				printf("%d ",cnt);
				pre=!pre;
				cnt=1;
			}
		}
	}
	printf("%d\n",cnt);
}
