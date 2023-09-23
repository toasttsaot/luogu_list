#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int num=0;
	int cnt=1;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]!='-'){
			num+=(cnt++)*(s[i]-'0');
		}
	}
//	cout<<num<<"\n";
	if(num%11==10){
		if(s[12]=='X'){
			cout<<"Right\n";
		}
		else{
			for(int i=0;i<s.size()-1;i++){
				cout<<s[i];
			}
			cout<<"X\n";
		}
	}
	else{
		if(s[12]==(char)(num%11+'0')){
			cout<<"Right\n";
		}
		else{
			for(int i=0;i<s.size()-1;i++){
				cout<<s[i];
			}
			cout<<(char)(num%11+'0')<<"\n";
		}
	}
}
