#include<bits/stdc++.h>
using namespace std;
string s;
int ansa=0,ansb=0;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='b'){
			ansa++;
			if(s[i+1]=='o'){
				s[i+1]='.';
			}
			if(s[i+2]=='y'){
				s[i+2]='.';
			}
		}
		else if(s[i]=='o'){
			ansa++;
			if(s[i-1]=='b'){
				s[i-1]='.';
			}
			if(s[i+1]=='y'){
				s[i+1]='.';
			}
		}
		else if(s[i]=='y'){
			ansa++;
			if(s[i-1]=='o'){
				s[i-1]='.';
			}
			if(s[i-2]=='b'){
				s[i-2]='.';
			}
		}
		else if(s[i]=='g'){
			ansb++;
			if(s[i+1]=='i'){
				s[i+1]='.';
			}
			if(s[i+2]=='r'){
				s[i+2]='.';
			}
			if(s[i+3]=='l'){
				s[i+3]='.';
			}
		}
		else if(s[i]=='i'){
			ansb++;
			if(s[i-1]=='g'){
				s[i-1]='.';
			}
			if(s[i+1]=='r'){
				s[i+1]='.';
			}
			if(s[i+2]=='l'){
				s[i+2]='.';
			}
		}
		else if(s[i]=='r'){
			ansb++;
			if(s[i-1]=='i'){
				s[i-1]='.';
			}
			if(s[i-2]=='g'){
				s[i-2]='.';
			}
			if(s[i+1]=='l'){
				s[i+1]='.';
			}
		}
		else if(s[i]=='l'){
			ansb++;
			if(s[i-1]=='r'){
				s[i-1]='.';
			}
			if(s[i-2]=='i'){
				s[i-2]='.';
			}
			if(s[i-3]=='g'){
				s[i-3]='.';
			}
		}
	}
	printf("%d\n%d\n",ansa,ansb);
}
