/*
	Name: PAT Judge
	Copyright: 
	Author: macs
	Date: 21/09/18 10:41
	Description:
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct user{
	int id;				//准考证号 
	int score[6];		//每道题得分 
	bool flag;			//是否能通过编译提交 
	int total;			//总分 
	int solve;			//问题完美解决数 
}sub[100010];
int n,k,m;
int p[7];
bool cmp(user a,user b){
	if(a.total != b.total) return a.total > b.total;
	else if(a.solve != b.solve) return a.solve > b.solve;
	else return a.id < b.id;
}
int main()
{
	freopen("test.txt","r",stdin);	
	scanf("%d%d%d",&n,&k,&m);
	for(int i = 1; i <= n; i++){
		sub[i].id = i;
		sub[i].total = 0;
		sub[i].solve = 0;
		sub[i].flag = false;
		memset(sub[i].score,-1,sizeof(sub[i].score));
	}
	for(int i = 1; i <= k; i++){
		scanf("%d",&p[i]);
	}
	int p_id,p_s_ob,u_id;
	for(int i = 0; i < m; i++){
		scanf("%d%d%d",&u_id,&p_id,&p_s_ob);
		if(p_s_ob != -1){
			sub[u_id].flag = true;
		}
		if(p_s_ob == -1 && sub[u_id].score[p_id] == -1){
			sub[u_id].score[p_id] = 0;
		}
		if(p_s_ob == p[p_id] && sub[u_id].score[p_id] < p[p_id]){
			sub[u_id].solve++;
		}
		if(p_s_ob > sub[u_id].score[p_id]){
			sub[u_id].score[p_id] = p_s_ob;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= k; j++){
			if(sub[i].score[j] != -1){
				sub[i].total += sub[i].score[j];
			}
		}
		
	}
	sort(sub+1,sub+n+1,cmp);
	int r = 1;
	for(int i = 1; i <= n && sub[i].flag == true; i++){
		if(i > 1 && sub[i].total != sub[i-1].total){
			r = i;
		}
		printf("%d %05d %d",r,sub[i].id,sub[i].total);
		for(int j = 1; j <= k; j++){
			if(sub[i].score[j] == -1){
				printf(" -");
			}else
				printf(" %d",sub[i].score[j]);
		}
		printf("\n");
	}
	return 0;
}

