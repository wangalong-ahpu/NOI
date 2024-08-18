struct edge{
	int u,v;
};
vector<edge> e;//边集
vector<int> h[N];//出边
int dfn[N],low[N],tot,cnt;
struct bridge{
	int x,y;
}bri[M];

void add(int a,int b){
	e.push_back({a,b});
	h[a].push_back(e.size()-1);
}

void tarjan(int x, int in_edg){
	dfn[x]=low[x]=++tot;
	for(int i=0;i<h[x].size();i++){
		int j=h[x][i], y=e[j].v;
		if(!dfn[y]){//若y尚未访问
			tarjan(y,j);
			low[x]=min(low[x],low[y]);
			if(low[y]>dfn[x]){
				bri[++cnt]={x,y};//记录割边
			}
		}
		else
			if(j!=(in_edg^1))//不是反边
				low[x]=min(low[x],dfn[y]);
	}
}
