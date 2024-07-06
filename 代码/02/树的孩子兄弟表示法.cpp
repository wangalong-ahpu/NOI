#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
 
//结点定义 
typedef struct node{
	char val;
	struct node* left; //左孩子 
	struct node* right; //右兄弟 
}TreeNode,*Tree;
 
//左孩子右兄弟表示的树的高度 
int Height(Tree& t){
	if(t == NULL) return 0;
	return Height(t->left) + 1 > Height(t->right) ? Height(t->left) + 1 : Height(t->right);
} 
 
//左孩子右兄弟表示的树的叶子结点数 
int Count(Tree& t){
	if(t == NULL) return 0;
	if(t->left == NULL) return 1;
	return Count(t->left) + Count(t->right); 
}
 
//总的结点数 
int CountSum(Tree& t){
	if(t == NULL) return 0;
	return CountSum(t->left) + CountSum(t->right) + 1;
}
 
//树的先根遍历 
void preOrder(Tree& t){
	if(t == NULL) return;
	cout<<t->val<<" ";
	TreeNode* p = t->left;
	while(p != NULL){
		preOrder(p); //递归找“根” 
		p = p->right;
	}	
} 
 
//树的后根遍历
void PostOrder(Tree& t){
	if(t == NULL) return;
	TreeNode* p = t->left;
	while(p != NULL){
		PostOrder(p); //递归找“根”
		p = p->right;
	}
	cout<<t->val<<" ";
} 
 
//二叉树的层次遍历 
void levelOrderTraverse(Tree& t){
	if(t == NULL) return;
	queue<TreeNode*> q;
	TreeNode* p;
	q.push(t);
	while(!q.empty()){
		int width = q.size();
		for(int i = 0;i < width;i ++){
			p = q.front();
			q.pop();
			cout<<p->val<<" ";
			if(p->left) q.push(p->left);
			if(p->right) q.push(p->right);
		}
		cout<<endl;
	}
}
 
//左孩子右兄弟表示的树的层次遍历 
void levelOrder(Tree& t){
	if(t == NULL) return;
	queue<TreeNode*> q;
	TreeNode* p;
	q.push(t);
	while(!q.empty()){
		int width = q.size();
		for(int i = 0;i < width;i ++){
			p = q.front();
			q.pop();
			cout<<p->val<<" ";
			p = p->left;
			while(p != NULL){
				q.push(p);
				p = p->right;
			}
		}
		cout<<endl;
	}
}
 
//左孩子右兄弟表示的树的宽度 
int Width(Tree& t){
	if(t == NULL) return 0;
	queue<TreeNode*> q;
	TreeNode* p;
	int max = 0;
	q.push(t);
	while(!q.empty()){
		int width = q.size();
		for(int i = 0;i < width;i ++){
			p = q.front();
			q.pop();
			p = p->left;
			while(p != NULL){
				q.push(p);
				p = p->right;
			}
		}
		max = max < width ? width : max; 
	}
	return max;
}
 
//先序遍历构造树 
void CreateTree(Tree& t){
	char x;
	cin>>x;
	if(x == '#') t = NULL; 
	else{
		t = new TreeNode; 
		t->val = x;  
		CreateTree(t->left); 
		CreateTree(t->right); 
	}
} 
 
//在以t为根的树中找结点p的双亲
TreeNode* findParent(Tree& t,TreeNode* p){
	if(t == NULL || p ==NULL) return NULL;
	TreeNode* q = t->left;
	TreeNode* s;
	//循长子的兄弟链，递归在子树中搜索 
	while(q != NULL && q != p){ 
		if((s = findParent(p,q)) != NULL) return s; //找到双亲，返回 
		q = q->right;
	}
	if(q != NULL && q == p) return t; //找到双亲 
	else return NULL; //未找到 
} 
 
int main(){
	Tree t;
	CreateTree(t);
	/*
	   a b d # # e # # #
	*/
	cout<<"用二叉树表示的树层次遍历:"<<endl;
	levelOrderTraverse(t);
	cout<<endl; 
	cout<<"左孩子右兄弟表示的树的层次遍历:"<<endl;
	levelOrder(t);
	cout<<endl; 
	cout<<"左孩子右兄弟表示的树的宽度:"<<endl;
	cout<<Width(t)<<endl; 
	cout<<"左孩子右兄弟表示的树的高度 :"<<endl;
	cout<<Height(t)<<endl; 
	cout<<"左孩子右兄弟表示的树的叶子结点数:"<<endl;
	cout<<Count(t)<<endl;
	cout<<"树的总结点数:"<<endl;
	cout<<CountSum(t)<<endl;
	cout<<"树的先根遍历:"<<endl;
	preOrder(t);
	cout<<endl; 
	cout<<"树的后根遍历:"<<endl;
	PostOrder(t);
	cout<<endl; 
}
