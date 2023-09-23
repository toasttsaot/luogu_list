#include<bits/stdc++.h>
using namespace std;
string s;
string ans;
int tp=1;
int pos;
string chg(int x,int y){
	if(s[x]=='0'){
		return "0";
	}
	string res=s;
	int cnt=0;
	int i=y;
	while(s[i--]=='0');
	i++;
	while(i>=x){
		res[cnt++]=s[i--];
	}
	return res.substr(0,cnt);
}
int main(){
	cin>>s;
	pos=s.size()-1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='.'){
			tp=2;
			pos=i-1;
			break;
		}
		if(s[i]=='/'){
			tp=3;
			pos=i-1;
			break;
		}
		if(s[i]=='%'){
			tp=4;
			pos=i-1;
		}
	}
	if(tp==1||tp==4){
		cout<<chg(0,pos);
		if(tp==4){
			printf("%\n");
		}
		else{
			printf("\n");
		}
	}
	else if(tp==2){
		cout<<chg(0,pos)<<".";
		if(s[s.size()-1]=='0'){
			printf("0\n");
			return 0;
		}
		int i=pos+2;
		while(s[i++]=='0');
		i--;
		int j=s.size()-1;
		while(j>=i){
			cout<<s[j--];
		}
		printf("\n");
	}
	else{
		int ed=s.size()-1;
		cout<<chg(0,pos)<<"/"<<chg(pos+2,ed)<<"\n";
	}
}
