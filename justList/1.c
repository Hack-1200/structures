#include <stdio.h>
#include <stdlib.h>
typedef int tInfo;
typedef struct Node{
	tInfo x;
	struct Node *next;
} node;


void *create();
void addToEnd(node*,tInfo);
void delFromEnd(node*);
void pr(node*);

int main(){
	node *root=create();

	for(int i=0;i<10;i++){
		addToEnd(root,i);
	}
	pr(root);
	delFromEnd(root);
	pr(root);

}

void *create(){
	node *root;
	root=(node*)malloc(sizeof(node));
	root->next=NULL;
	root->x=0;
	return root;
}

void addToEnd(node *root,tInfo lx){
	while(root->next!=NULL){
		root=root->next;
	}

	root->next=(node*)malloc(sizeof(node));
	root->x=lx;
	root->next->next=NULL;
}

void pr(node *root){
	while(root->next!=NULL){
		printf("%d ",root->x);
		root=root->next;
	}
	printf("\n");
}

void delFromEnd(node* root){
	while(root->next->next!=NULL){
		root=root->next;
	}
	free(root->next);
	root->next=NULL;
	
}