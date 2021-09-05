#include<stdio.h>
#include<stdlib.h>
//�ڵ�Ķ���
typedef struct _Lnode {
	int data;
	struct _Lnode* next;
} LNode;

//�������� ����ͷ�ڵ�
LNode* createList() {
	LNode* headNode;
	headNode = (LNode*)malloc(sizeof(LNode));
	headNode->next = NULL;
	return headNode;
}

//�����µĽڵ�
LNode* createNode(int data) {
	LNode* newNode;
	newNode =(LNode*)malloc(sizeof(LNode));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
//��ӡ����
 void printList(LNode* headNode) {
	 LNode* pMove = headNode->next;
	 while (pMove) {
		 printf("%d\t",pMove->data);
		 pMove = pMove->next;

	 }
	 printf("\n");
}
 //����ڵ�
 void insertNodeByHead(LNode* headNode,int data) {
	 LNode* newNode = createNode(data);
	 newNode->next = headNode->next;
	 headNode->next = newNode;
 }
 //�����ɾ����ָ��λ��ɾ��
 void deleteNodeByAppoin(LNode* headNode,int posData) {
	 LNode* posNode = headNode->next;
	 LNode* posNodeFront = headNode;
	 if (posNode == NULL) {
		 printf("����Ϊ�գ��޷�ɾ����");
	 }
	 else {
		 while (posNode->data != posData) {
			 posNodeFront = posNode;
			 posNode = posNodeFront->next;
			 if (posNode == NULL) {
				 printf("δ�ҵ���ؽڵ㣬�޷�ɾ��!\n");
				 break;
			 }
			 

		 }
		 posNodeFront->next = posNode->next;
		 free(posNode);
	 }
	 
}
int main() {
	LNode* list;

	list = createList();
	insertNodeByHead(list, 1);
	insertNodeByHead(list, 2);
	insertNodeByHead(list, 3);
	printList(list);
	deleteNodeByAppoin(list, 2);
	printList(list);
	return 0;
}