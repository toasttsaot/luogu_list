#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]=(char)(s[i]-'a'+'A');
		}
	}
	cout<<s<<"\n";
}
