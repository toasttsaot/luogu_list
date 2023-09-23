#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	cin>>a[1]>>a[2]>>a[3];
	sort(a+1,a+4);
	if(a[3]>=a[1]+a[2]){
		cout<<"Not triangle\n";
		return 0;
	}
	if(a[1]*a[1]+a[2]*a[2]==a[3]*a[3]){
		cout<<"Right triangle\n";
	}
	else if(a[1]*a[1]+a[2]*a[2]<a[3]*a[3]){
		cout<<"Obtuse triangle\n";
	}
	else{
		cout<<"Acute triangle\n";
	}
	if(a[1]==a[2]||a[2]==a[3]){
		cout<<"Isosceles triangle\n";
	}
	if(a[1]==a[2]&&a[2]==a[3]){
		cout<<"Equilateral triangle\n";
	}
}
