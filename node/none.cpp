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

void msgNum_Init(Node **tree) { //�޼����󵵼��� ���������� �ʱ�ȭ.
	*tree = getNode();
	Node *t = *tree;
	printf("%x %x %x", tree, *tree, t);


	srand(time(NULL)); //�����߻��� ���� seed���� �ش�.
	for (int i = 0; i < MessageNum; i++) { //�ݺ����� ���鼭 �󵵼�,�޼����ʱ�ȭ�ϸ� 
		if (i = 0) {
			t->frequency = (rand() % 400) + 100;
			t->message = 'A' + i;
			printf("%d\n", t->frequency);
		}
		else {
			//t = t->rlink; �ʿ䰡 ����...?
			t = getNode();
			t->frequency = (rand() % 400) + 100;
			t->message = 'A' + i;
			if (i>25) t->message += 6; //i>26�� �ҹ��ڷ� �ʱ�ȭ.
		}
	}
}


void main() {
	Node *tree;
	int a;

	msgNum_Init(&tree);




}