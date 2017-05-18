#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MessageNum 30

typedef struct DlistNode {
	int frequency;
	char message;
	struct DlistNode *llink;
	struct DlistNode *rlink;

}Node;

Node *getNode() {
	Node  *node = (Node *)malloc(sizeof(Node));
	node->llink = NULL;
	node->rlink = NULL;
	node->frequency = 0;
	node->message = NULL;
	return node;
}

void msgNum_Init(Node **tree) { //메세지빈도수를 랜덤값으로 초기화.
	*tree = getNode();
	Node *t = *tree;
	printf("%x %x %x", tree, *tree, t);


	srand(time(NULL)); //난수발생을 위해 seed값을 준다.
	for (int i = 0; i < MessageNum; i++) { //반복문을 돌면서 빈도수,메세지초기화하며 
		if (i = 0) {
			t->frequency = (rand() % 400) + 100;
			t->message = 'A' + i;
			printf("%d\n", t->frequency);
		}
		else {
			//t = t->rlink; 필요가 없나...?
			t = getNode();
			t->frequency = (rand() % 400) + 100;
			t->message = 'A' + i;
			if (i>25) t->message += 6; //i>26은 소문자로 초기화.
		}
	}
}


void main() {
	Node *tree;
	int a;

	msgNum_Init(&tree);




}