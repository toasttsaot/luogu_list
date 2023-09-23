#include<bits/stdc++.h>
using namespace std;
string s;
int mapp[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int main(){
	int ans=0;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			ans++;
		}
		if(s[i]>='a'&&s[i]<='z'){
			ans+=mapp[s[i]-'a'];
		}
	}
	printf("%d\n",ans);
}
