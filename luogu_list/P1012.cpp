#include<bits/stdc++.h>
using namespace std;
const int N=30;
int n;
string s[N];
bool cmp(string a,string b){
	if(a==b){
		return 1;
	}
	int i=0,j=0;
	while(a[i]==b[j]){
		i++;
		j++;
		i%=a.size();
		j%=b.size();
	}
	return a[i]>b[j];
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+1+n,cmp);
	string ans=s[1];
	for(int i=2;i<=n;i++){
		ans+=s[i];
	}
	cout<<ans;
}
