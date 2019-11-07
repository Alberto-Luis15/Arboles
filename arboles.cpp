#include <bits/stdc++.h>
using namespace std;

struct NoDo{
	int dato;
	NoDo *left, *right;
}; 
NoDo* root=NULL;
int main(int argc, char** argv){
	NoDo *aux=root;
	root=new NoDo();
	root->dato=15;
	root->left=new NoDo();
	root->right=new NoDo();
	aux=root->left;
	aux->dato=8;
	aux->left=new NoDo();
	aux->right=new NoDo();
	aux=aux->left;
	aux->dato=4;
	aux->left=NULL;
	aux->right=NULL;
	aux=root->left;
	aux=aux->right;
	aux->dato=3;
	aux->left=NULL;
	aux->right=NULL;
	aux=root->right;
	aux->dato=10;
	aux->left=new NoDo();
	aux->right=new NoDo();
	aux=aux->left;
	aux->dato=5;
	aux->left=NULL;
	aux->right=NULL;
	aux=root->right;
	aux=aux->right;
	aux->dato=7;
	aux->left=NULL;
	aux->right=NULL;
	
	cout<<" "<<" "<<root->dato<<endl;
	cout<<" "<<root->left->dato<<" "<<root->right->dato<<endl;
	cout<<root->left->left->dato<<" "<<root->left->right->dato<<" "<<root->right->left->dato<<" "<<root->right->right->dato<<endl;
	
	
	return 0;
		
}
