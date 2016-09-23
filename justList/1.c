#include <stdio.h>
#include <stdlib.h>
typedef tInfo int
typedef struct Node{
	tInfo x;
	struct Node *next;
} node;

typedef struct list{
	node* first;
	node* last;
} list;

void *create();
void *addToEnd(node*,tInfo);

int main(){
	list *text;
	text->first=text->last=create();

}

void *create(){
	root=(node*)malloc(sizeof(node));
	root->next=NULL
	root->x=0;
	return root;
}

void *addToEnd(node *last,tInfo lx){
	last->next=(node)malloc(sizeof(node));
	last->x=lx;
	last->next->next=NULL;
	return last;
}