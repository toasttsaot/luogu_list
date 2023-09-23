#include<bits/stdc++.h>
using namespace std;
const int N=500;
int n;
struct Stu{
	int num,c,m,e;
	int sum;
}stu[N];
bool cmp(Stu a,Stu b){
	if(a.sum==b.sum){
		if(a.c==b.c){
			return a.num<b.num;
		}
		return a.c>b.c;
	}
	return a.sum>b.sum;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&stu[i].c,&stu[i].m,&stu[i].e);
		stu[i].num=i;
		stu[i].sum=stu[i].c+stu[i].m+stu[i].e;
	}
	sort(stu+1,stu+1+n,cmp);
	for(int i=1;i<=5;i++){
		printf("%d %d\n",stu[i].num,stu[i].sum);
	}
}
