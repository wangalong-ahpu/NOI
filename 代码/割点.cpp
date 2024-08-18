vector<int> e[N];
int dfn[N],low[N],tot;
int cut[N],root;
void tarjan(int x){
	//入x时﹐盖戳
	dfn[x]=low[x]=++tot;
	int child=0;
	for(int y : e[x]){
		if(!dfn[y]){//若y尚未访问
			tarjan(y);
			//回x时，更新low，判割点
			low[x]=min(low[x],low[y]);
			if(low[y]>=dfn[x]){
				child++;//子树个数
				if(x!=root||child>1)
					cut[x]=true;
			}
		}
		else //若y己经访问
			low[x]=min(low[x],dfn[y]);
	}
}

