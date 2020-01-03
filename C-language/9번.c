#include<stdio.h>
#include<stdlib.h>
typedef struct listNode
{
	int data;
	struct listNode *link;
}listNode;
listNode* insert_search(listNode *pre, int pos)  // ������ ��� ���� ����Ű�� ���� �Լ� ( pre ) 
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
listNode* delete_search(listNode *pre, int n, int m)  // ������ ��� ���� ����Ű�� ���� �Լ� ( pre ) 
{
	int i;
	if (m == n && m == n - 1)
		return pre;
	else
		for (i = 0; i < m - n - 1; i++)  // �̰� �̹����� Ǯ�� �ְ��� ���̵�� �ΰ� ����. ( m-n-1 ) 
			pre = pre->link;
	return pre;
}
listNode* delete_node(listNode *head, int n, int m)  // ���������� N ���� ��� ���� n 
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
	printf("����Ʈ�� ������ �Է��ϼ���");
	scanf_s("%d", &m);
	printf("n��°���� �Է��ϼ���");
	scanf_s("%d", &n);
	for (int i = 0; i < m; i++)
	{
		head = insert_node(head, i, i + 1);
	}
	head = delete_node(head, n, m);
	print(head);
}