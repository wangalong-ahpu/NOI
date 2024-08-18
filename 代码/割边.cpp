struct edge{
	int u,v;
};
vector<edge> e;//�߼�
vector<int> h[N];//����
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
		if(!dfn[y]){//��y��δ����
			tarjan(y,j);
			low[x]=min(low[x],low[y]);
			if(low[y]>dfn[x]){
				bri[++cnt]={x,y};//��¼���
			}
		}
		else
			if(j!=(in_edg^1))//���Ƿ���
				low[x]=min(low[x],dfn[y]);
	}
}
