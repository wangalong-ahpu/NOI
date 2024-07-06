#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
 
//��㶨�� 
typedef struct node{
	char val;
	struct node* left; //���� 
	struct node* right; //���ֵ� 
}TreeNode,*Tree;
 
//�������ֵܱ�ʾ�����ĸ߶� 
int Height(Tree& t){
	if(t == NULL) return 0;
	return Height(t->left) + 1 > Height(t->right) ? Height(t->left) + 1 : Height(t->right);
} 
 
//�������ֵܱ�ʾ������Ҷ�ӽ���� 
int Count(Tree& t){
	if(t == NULL) return 0;
	if(t->left == NULL) return 1;
	return Count(t->left) + Count(t->right); 
}
 
//�ܵĽ���� 
int CountSum(Tree& t){
	if(t == NULL) return 0;
	return CountSum(t->left) + CountSum(t->right) + 1;
}
 
//�����ȸ����� 
void preOrder(Tree& t){
	if(t == NULL) return;
	cout<<t->val<<" ";
	TreeNode* p = t->left;
	while(p != NULL){
		preOrder(p); //�ݹ��ҡ����� 
		p = p->right;
	}	
} 
 
//���ĺ������
void PostOrder(Tree& t){
	if(t == NULL) return;
	TreeNode* p = t->left;
	while(p != NULL){
		PostOrder(p); //�ݹ��ҡ�����
		p = p->right;
	}
	cout<<t->val<<" ";
} 
 
//�������Ĳ�α��� 
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
 
//�������ֵܱ�ʾ�����Ĳ�α��� 
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
 
//�������ֵܱ�ʾ�����Ŀ�� 
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
 
//������������� 
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
 
//����tΪ���������ҽ��p��˫��
TreeNode* findParent(Tree& t,TreeNode* p){
	if(t == NULL || p ==NULL) return NULL;
	TreeNode* q = t->left;
	TreeNode* s;
	//ѭ���ӵ��ֵ������ݹ������������� 
	while(q != NULL && q != p){ 
		if((s = findParent(p,q)) != NULL) return s; //�ҵ�˫�ף����� 
		q = q->right;
	}
	if(q != NULL && q == p) return t; //�ҵ�˫�� 
	else return NULL; //δ�ҵ� 
} 
 
int main(){
	Tree t;
	CreateTree(t);
	/*
	   a b d # # e # # #
	*/
	cout<<"�ö�������ʾ������α���:"<<endl;
	levelOrderTraverse(t);
	cout<<endl; 
	cout<<"�������ֵܱ�ʾ�����Ĳ�α���:"<<endl;
	levelOrder(t);
	cout<<endl; 
	cout<<"�������ֵܱ�ʾ�����Ŀ��:"<<endl;
	cout<<Width(t)<<endl; 
	cout<<"�������ֵܱ�ʾ�����ĸ߶� :"<<endl;
	cout<<Height(t)<<endl; 
	cout<<"�������ֵܱ�ʾ������Ҷ�ӽ����:"<<endl;
	cout<<Count(t)<<endl;
	cout<<"�����ܽ����:"<<endl;
	cout<<CountSum(t)<<endl;
	cout<<"�����ȸ�����:"<<endl;
	preOrder(t);
	cout<<endl; 
	cout<<"���ĺ������:"<<endl;
	PostOrder(t);
	cout<<endl; 
}
