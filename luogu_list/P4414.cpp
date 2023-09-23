#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	string s;
	cin>>a[1]>>a[2]>>a[3];
	cin>>s;
	sort(a+1,a+4);
	for(int i=0;i<s.size();i++){
		cout<<a[1+s[i]-'A']<<" ";
	}
	cout<<"\n";
}
