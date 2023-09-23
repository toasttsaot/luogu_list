#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int ans=-1;
int calc(){
	int res=0;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]=='V'&&s[i+1]=='K'){
			res++;
		}
	}
	return res;
}
int main(){
	cin>>n>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='V'){
			s[i]='K';
			ans=max(ans,calc());
			s[i]='V';
		}
		else{
			s[i]='V';
			ans=max(ans,calc());
			s[i]='K';
		}
		ans=max(ans,calc());
	}
	printf("%d\n",ans);
}
