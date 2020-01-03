#include<stdio.h>
#include<stdlib.h>
typedef struct listNode
{
	int data;
	struct listNode *link;
}listNode;
listNode* insert_search(listNode *pre, int pos)  // 삽입할 노드 앞을 가르키기 위한 함수 ( pre ) 
{
	int i;
	if (pos == 1)
		return pre;
	for (i = 1; i < pos; i++)
		pre = pre->link;
	return pre;
}
listNode* insert_node(listNode *head, int pos, int item)
{
	listNode *p = (listNode *)malloc(sizeof(listNode));
	listNode *pre = head;
	if (head == NULL)
	{
		p->link = NULL;
		p->data = item;
		return p;
	}
	else
	{
		pre = insert_search(pre, pos);
		p->data = item;
		pre->link = p;
		p->link = NULL;
		return head;
	}
}
listNode* delete_search(listNode *pre, int n, int m)  // 삭제할 노드 앞을 가르키기 위한 함수 ( pre ) 
{
	int i;
	if (m == n && m == n - 1)
		return pre;
	else
		for (i = 0; i < m - n - 1; i++)  // 이게 이문제를 풀때 최고의 아이디어 인거 같다. ( m-n-1 ) 
			pre = pre->link;
	return pre;
}
listNode* delete_node(listNode *head, int n, int m)  // 끝에서부터 N 번쨰 노드 제거 n 
{
	listNode *remove;
	if (m == 1)
		return NULL;
	listNode *pre = head;
	pre = delete_search(pre, n, m);
	remove = pre->link;
	pre->link = remove->link;
	free(remove);
	return head;
}
void print(listNode *p)
{
	while (p != NULL)
	{
		printf("%d-> ", p->data);
		p = p->link;
	}
	printf("NULL \n");
}
int main()
{
	listNode  *head = NULL;
	int n, m;
	printf("리스트의 개수를 입력하세요");
	scanf_s("%d", &m);
	printf("n번째값을 입력하세요");
	scanf_s("%d", &n);
	for (int i = 0; i < m; i++)
	{
		head = insert_node(head, i, i + 1);
	}
	head = delete_node(head, n, m);
	print(head);
}