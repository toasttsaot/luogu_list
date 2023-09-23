#include<bits/stdc++.h>
using namespace std;
string s[10];
int n;
string num;
string mapp[20][10];
void sett(){
	mapp[0][1]="XXX";
	mapp[1][1]="..X";
	mapp[2][1]="XXX";
	mapp[3][1]="XXX";
	mapp[4][1]="X.X";
	mapp[5][1]="XXX";
	mapp[6][1]="XXX";
	mapp[7][1]="XXX";
	mapp[8][1]="XXX";
	mapp[9][1]="XXX";
	
	mapp[0][2]="X.X";
	mapp[1][2]="..X";
	mapp[2][2]="..X";
	mapp[3][2]="..X";
	mapp[4][2]="X.X";
	mapp[5][2]="X..";
	mapp[6][2]="X..";
	mapp[7][2]="..X";
	mapp[8][2]="X.X";
	mapp[9][2]="X.X";
	
	mapp[0][3]="X.X";
	mapp[1][3]="..X";
	mapp[2][3]="XXX";
	mapp[3][3]="XXX";
	mapp[4][3]="XXX";
	mapp[5][3]="XXX";
	mapp[6][3]="XXX";
	mapp[7][3]="..X";
	mapp[8][3]="XXX";
	mapp[9][3]="XXX";
	
	mapp[0][4]="X.X";
	mapp[1][4]="..X";
	mapp[2][4]="X..";
	mapp[3][4]="..X";
	mapp[4][4]="..X";
	mapp[5][4]="..X";
	mapp[6][4]="X.X";
	mapp[7][4]="..X";
	mapp[8][4]="X.X";
	mapp[9][4]="..X";
	
	mapp[0][5]="XXX";
	mapp[1][5]="..X";
	mapp[2][5]="XXX";
	mapp[3][5]="XXX";
	mapp[4][5]="..X";
	mapp[5][5]="XXX";
	mapp[6][5]="XXX";
	mapp[7][5]="..X";
	mapp[8][5]="XXX";
	mapp[9][5]="XXX";
}
string dott=".";
int main(){
	sett();
	cin>>n>>num;
	for(int i=0;i<num.size();i++){
		int nn=num[i]-'0';
		for(int j=1;j<=5;j++){
			if(s[j].size()==0){
				s[j]=mapp[nn][j];
			}
			else{
				s[j]+=dott+mapp[nn][j];
			}
		}
	}
	for(int i=1;i<=5;i++){
		cout<<s[i]<<"\n";
	}
}
