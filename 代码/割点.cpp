vector<int> e[N];
int dfn[N],low[N],tot;
int cut[N],root;
void tarjan(int x){
	//��xʱ�o�Ǵ�
	dfn[x]=low[x]=++tot;
	int child=0;
	for(int y : e[x]){
		if(!dfn[y]){//��y��δ����
			tarjan(y);
			//��xʱ������low���и��
			low[x]=min(low[x],low[y]);
			if(low[y]>=dfn[x]){
				child++;//��������
				if(x!=root||child>1)
					cut[x]=true;
			}
		}
		else //��y��������
			low[x]=min(low[x],dfn[y]);
	}
}

