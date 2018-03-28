#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode *link;
} ListNode;

// phead: ����Ʈ�� ��� �������� ������
// p : ���� ���
// new_node : ���Ե� ��� 
void insert_node(ListNode **phead, ListNode *p,
	ListNode *new_node)
{
	if (*phead == NULL) {	// ���鸮��Ʈ�� ���
		new_node->link = NULL;
		*phead = new_node;
	}
	else if (p == NULL) { // p�� NULL�̸� ù��° ���� ����
		new_node->link = *phead;
		*phead = new_node;
	}
	else {			 // p ������ ����
		new_node->link = p->link;
		p->link = new_node;
	}
}
// phead : ��� �����Ϳ� ���� ������ 
// p: ������ ����� ���� ���
// removed: ������ ��� 
void remove_node(ListNode **phead, ListNode *p, ListNode *removed)
{
	if (p == NULL)
		*phead = (*phead)->link;
	else
		p->link = removed->link;
	free(removed);
}
void display(ListNode *head)
{
	ListNode *p = head;
	while (p != NULL) {
		printf("%d->", p->data);
		p = p->link;
	}
	printf("\n");
}
void display_recur(ListNode *head)
{
	ListNode *p = head;
	if (p != NULL) {
		printf("%d->", p->data);
		display_recur(p->link);
	}
}
//����Ʈ���� �� ã��
ListNode *search(ListNode *head, int x)
{
	ListNode *p;
	p = head;
	while (p != NULL) {
		if (p->data == x) return p;  // Ž�� ����
		p = p->link;
	}
	return p;  // Ž�� ������ ��� NULL ��ȯ
}
//�� ���� ����Ʈ�� �պ�
ListNode *concat(ListNode *head1, ListNode *head2)
{
	ListNode *p;
	if (head1 == NULL) return head2;
	else if (head2 == NULL) return head1;
	else {
		p = head1;
		while (p->link != NULL)
			p = p->link;
		p->link = head2;
		return head1;
	}
}
//�������� �ٲ�
ListNode *reverse(ListNode *head)
{
	// ��ȸ �����ͷ� p, q, r�� ���
	ListNode *p, *q, *r;
	p = head;         // p�� �������� ���� ����Ʈ
	q = NULL;         // q�� �������� ���� ���
	while (p != NULL) {
		r = q;          // r�� �������� �� ����Ʈ.    r�� q, q�� p�� ���ʷ� ���󰣴�.
		q = p;
		p = p->link;
		q->link = r;      // q�� ��ũ ������ �ٲ۴�.
	}
	return q; 	// q�� �������� �� ����Ʈ�� ��� ������
}

// ��带 �������� �����ϴ� ���α׷�
ListNode *create_node(element data, ListNode *link)
{
	ListNode *new_node;
	new_node = (ListNode *)malloc(sizeof(ListNode));
	if (new_node == NULL) {
		fprintf(stderr, "�޸� �Ҵ� ����\n");
		exit(1);
	}
	new_node->data = data;
	new_node->link = link;
	return(new_node);
}
// �׽�Ʈ ���α׷�
void main()
{
	ListNode *list1 = NULL, *list2 = NULL;
	ListNode *p;

	// list1 = 30->20->10
	insert_node(&list1, NULL, create_node(10, NULL));
	insert_node(&list1, NULL, create_node(20, NULL));
	insert_node(&list1, NULL, create_node(30, NULL));
	display_recur(list1);

	// list1 = 20->10
	remove_node(&list1, NULL, list1);
	display(list1);

	// list2 = 80->70->60 
	insert_node(&list2, NULL, create_node(60, NULL));
	insert_node(&list2, NULL, create_node(70, NULL));
	insert_node(&list2, NULL, create_node(80, NULL));
	display(list2);

	// list1 = list1 + list2
	list1 = concat(list1, list2);
	display(list1);

	// list1�� �������� 
	list1 = reverse(list1);
	display(list1);

	// list1���� 20 Ž��
	p = search(list1, 20);
	printf("Ž������: %d\n", p->data);

}