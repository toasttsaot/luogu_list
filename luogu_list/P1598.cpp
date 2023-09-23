#include<bits/stdc++.h>
using namespace std;
string s;
int tim[30]={};
int main(){
	while(cin>>s){
		for(int i=0;i<s.size();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				tim[s[i]-'A']++;
			}
		}
	}
	int maxx=-1;
	for(int i=0;i<26;i++){
		maxx=max(maxx,tim[i]);
	}
	while(maxx){
		if(tim[0]>=maxx){
			printf("*");
		}
		else{
			printf(" ");
		}
		for(int i=1;i<26;i++){
			if(tim[i]>=maxx){
				printf(" *");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
		maxx--;
	}
	printf("A");
	for(int i=1;i<26;i++){
		cout<<" "<<(char)('A'+i);
	}
}
