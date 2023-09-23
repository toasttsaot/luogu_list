#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<"I love Luogu!";
	}
	else if(n==2){
		cout<<"6 4";
	}
	else if(n==3){
		cout<<"3\n12\n2";
	}
	else if(n==4){
		cout<<"166.667";
	}
	else if(n==5){
		cout<<480/32;
	}
	else if(n==6){
		cout<<pow(6*6+9*9,0.5);
	}
	else if(n==7){
		cout<<"110\n90\n0";
	}
	else if(n==8){
		double pi=3.141593;
		cout<<10*pi<<"\n"<<25*pi<<"\n"<<4.0/3.0*pi*125;
	}
	else if(n==9){
		cout<<22;
	}
	else if(n==10){
		cout<<9;
	}
	else if(n==11){
		cout<<100.0/3;
	}
	else if(n==12){
		cout<<'M'-'A'+1<<"\n"<<(char)('A'+17);
	}
	else if(n==13){
		double pi=3.141593;
		double sum=4.0/3.0*pi*(1000.0+64.0);
		cout<<(int)pow(sum,1.0/3.0);
	}
	else{
		cout<<50;
	}
}
