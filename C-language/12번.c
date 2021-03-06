#include<stdio.h>
#include<stdlib.h>
typedef int element;
int count = 0;
typedef struct ListNode
{
	element data;
	struct ListNode* link;
}ListNode;

ListNode* search(ListNode *head, int pos)
{
	int i;
	if (pos == 2)
		return head;
	else
	{
		for (int i = 1; i< pos - 1; i++)
			head = head->link;
		return head;
	}
}
ListNode* insert_node(ListNode *head, int pos, element item)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	ListNode *temp = head;
	node->data = item;
	count++;
	if (head == NULL)
	{
		head = node;
		node->link = NULL;
	}
	else
	{
		temp = search(temp, pos);
		temp->link = node;
		node->link = NULL;
	}
	return head;
}
ListNode* add_list(ListNode *head1, ListNode *head2)
{
	ListNode *temp = head1;
	for (int i = 1; i < 3; i++)
	{
		temp = temp->link;
	}
	temp->link = head2;
	return head1;
}
void sorted_list(ListNode *head1, ListNode *head2)
{
	int count1 = 0, count2 = 0;
	ListNode *low = head1;
	ListNode *high = head2;
	for (int i = 0; i < count; i++)
	{
		if (low->data > high->data)
		{
			printf("%d-> ", high->data);
			high = high->link;
			count1++;
			if (high == NULL)
				break;
		}
		else if (low->data < high->data)
		{
			printf("%d-> ", low->data);
			low = low->link;
			count2++;
			if (low == NULL)
				break;
		}
		else
		{
			printf("%d-> ", high->data);
			printf("%d-> ", low->data);
			high = high->link;
			count1++;
			low = low->link;
			count2++;
			if (high == NULL || low == NULL)
				break;
		}
	}
	while (low != NULL)
	{
		printf("%d-> ", low->data);
		low = low->link;
	}

	while (high != NULL)
	{
		printf("%d-> ", high->data);
		high = high->link;
	}
	printf("NULL\n");
}
void print(ListNode *head)
{
	while (head != NULL)
	{
		printf("%d-> ", head->data);
		head = head->link;
	}
	printf("NULL\n");
}
int main()
{
	ListNode *head1 = NULL;
	ListNode *head2 = NULL;
	head1 = insert_node(head1, 1, 1);
	head1 = insert_node(head1, 2, 2);
	head1 = insert_node(head1, 3, 3);
	head1 = insert_node(head1, 4, 4);
	head1 = insert_node(head1, 5, 5);

	head2 = insert_node(head2, 1, 3);
	head2 = insert_node(head2, 2, 4);
	sorted_list(head1, head2);
}