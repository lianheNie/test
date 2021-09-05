#include<stdio.h>
#include<stdlib.h>
//节点的定义
typedef struct _Lnode {
	int data;
	struct _Lnode* next;
} LNode;

//创建链表 返回头节点
LNode* createList() {
	LNode* headNode;
	headNode = (LNode*)malloc(sizeof(LNode));
	headNode->next = NULL;
	return headNode;
}

//创建新的节点
LNode* createNode(int data) {
	LNode* newNode;
	newNode =(LNode*)malloc(sizeof(LNode));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
//打印链表
 void printList(LNode* headNode) {
	 LNode* pMove = headNode->next;
	 while (pMove) {
		 printf("%d\t",pMove->data);
		 pMove = pMove->next;

	 }
	 printf("\n");
}
 //插入节点
 void insertNodeByHead(LNode* headNode,int data) {
	 LNode* newNode = createNode(data);
	 newNode->next = headNode->next;
	 headNode->next = newNode;
 }
 //链表的删除：指定位置删除
 void deleteNodeByAppoin(LNode* headNode,int posData) {
	 LNode* posNode = headNode->next;
	 LNode* posNodeFront = headNode;
	 if (posNode == NULL) {
		 printf("链表为空，无法删除！");
	 }
	 else {
		 while (posNode->data != posData) {
			 posNodeFront = posNode;
			 posNode = posNodeFront->next;
			 if (posNode == NULL) {
				 printf("未找到相关节点，无法删除!\n");
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