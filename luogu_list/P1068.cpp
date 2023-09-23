#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
int n,m;
struct Stu{
	int num,sc;
}stu[N];
bool cmp(Stu a,Stu b){
	if(a.sc==b.sc){
		return a.num<b.num;
	}
	return a.sc>b.sc;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&stu[i].num,&stu[i].sc);
	}
	sort(stu+1,stu+1+n,cmp);
	m=(int)((double)m*1.5);
	int lin=stu[m].sc;
	int res=1;
	while(lin<=stu[res].sc){
		res++;
	}
	res--;
	printf("%d %d\n",lin,res);
	for(int i=1;i<=res;i++){
		printf("%d %d\n",stu[i].num,stu[i].sc);
	}
}
