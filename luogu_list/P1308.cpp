#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int main(){
	getline(cin,s1);
	getline(cin,s2);
	int tot=0;
	int fir;
	for(int i=0;i<s1.size();i++){
		if(s1[i]>='a'&&s1[i]<='z'){
			s1[i]=(char)(s1[i]-'a'+'A');
		}
	}
	for(int i=0;i<s2.size();i++){
		if(s2[i]>='a'&&s2[i]<='z'){
			s2[i]=(char)(s2[i]-'a'+'A');
		}
	}
	for(int i=0;i<s2.size();i++){
		if(s2[i]==' '){
			continue;
		}
		if(i!=0&&s2[i-1]!=' '){
			continue;
		}
		int j=0,k=i;
		while(j<s1.size()&&k<s2.size()&&s1[j]==s2[k]){
			j++;
			k++;
		}
		if(j==s1.size()&&(k!=s2.size()&&s2[k]==' ')){
			tot++;
			if(tot==1){
				fir=i;
			}
		}
	}
	if(tot==0){
		printf("-1\n");
	}
	else{
		printf("%d %d\n",tot,fir);
	}
}
