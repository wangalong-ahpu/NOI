#include<bits/stdc++.h>
using namespace std;
int n,q,mx[300001][41],deep[300001],sum[300001],ans;
vector<int> vec[300001];
void dfs(int x,int fa)//lca�ĳ�ʼ��
{
	deep[x] = deep[fa] + 1;
	mx[x][0] = fa;
	for(int i = 0;i < vec[x].size();i++)
		if(vec[x][i] != fa)
	  		dfs(vec[x][i],x);
}
int lca(int x,int y)//��������lca
{
	if(deep[x] < deep[y]) swap(x,y);
	for(int i = 40;i >= 0;i--)
		if(deep[mx[x][i]] >= deep[y])
			x = mx[x][i];
	if(x == y) return x;
	for(int i = 40;i >= 0;i--)
		if(mx[x][i] != mx[y][i])
		{
		  x = mx[x][i];
		  y = mx[y][i];
		}
	return mx[x][0];
}
void dfss(int x,int fa)//ͳ�ƴ𰸵����ֵ
{
	for(int i = 0;i < vec[x].size();i++)
	{
		int t = vec[x][i];
		if(t == fa) continue;
		dfss(t,x);
		sum[x] += sum[t];//�����Ͻ���������ǰ׺�͵Ĳ���
	}
	ans = max(ans,sum[x]);//ȡ���ֵ
}
signed main()
{
	cin>>n>>q;
	for(int i = 1;i < n;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	dfs(1,0);
	for(int j = 1;j <= 40;j++){
		for(int i = 1;i <= n;i++){
			mx[i][j] = mx[mx[i][j - 1]][j - 1];
		}
	}
	while(q--)
	{
		int u,v;
		cin>>u>>v;
		int l = lca(u,v);
		sum[u]++;//���ϲ��
		sum[v]++;
		sum[l]--;
		if(l != 1) sum[mx[l][0]]--;//���l�и��ڵ�ͽ��к���Ĳ���
	}
	dfss(1,0);
	cout<<ans;
	return 0;
}
//5 10
//3 4
//1 5
//4 2
//5 4
//5 4
//5 4
//3 5
//4 3
//4 3
//1 3
//3 5
//5 4
//1 5
//3 4

