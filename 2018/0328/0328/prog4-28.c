#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <limits.h>

#define FALSE 0
#define TRUE 1

typedef int element;
typedef struct ListNode { 
	element data;
	struct ListNode *link;   	
} ListNode;
typedef struct {
	ListNode *head;     // ��� ������
	int length;		// ����� ����
} ListType;

// phead: ����Ʈ�� ��� �������� ������
// p : ���� ���
// new_node : ���Ե� ��� 
void insert_node(ListNode **phead, ListNode *p, 
					ListNode *new_node) 
{
	if( *phead == NULL ){	// ���鸮��Ʈ�� ���
		new_node->link = NULL; 
		*phead = new_node; 
	}
	else if( p == NULL ){ // p�� NULL�̸� ù��° ���� ����
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
	if( p == NULL ) 
		*phead = (*phead)->link; 
	else 
		p->link = removed->link; 
	free(removed);		
}
// ����Ʈ�� �ʱ�ȭ�Ѵ�.
void init(ListType *list)
{
	if( list == NULL ) return;
	list->length = 0;
	list->head = NULL;
}
// ����Ʈ�ȿ��� pos ��ġ�� ��带 ��ȯ�Ѵ�.
ListNode *get_node_at(ListType *list, int pos)
{
	int i;
	ListNode *tmp_node = list->head;
	if( pos < 0 ) return NULL;
	for (i=0; i<pos; i++)
		tmp_node = tmp_node->link;
	return tmp_node;
} 
// ����Ʈ�� �׸��� ������ ��ȯ�Ѵ�.
int get_length(ListType *list)
{
	return list->length;
}
//
void error(char *message)
{
	fprintf(stderr,"%s\n",message);
	exit(1);
}
// �־��� ��ġ�� �����͸� �����Ѵ�.
void add(ListType *list, int position, element data) 
{
 ListNode *p;
 if ((position >= 0) && (position <= list->length)){
   ListNode*node=	(ListNode *)malloc(sizeof(ListNode)); 
   if( node == NULL ) error("�޸� �Ҵ翡��");
   node->data = data;
   p = get_node_at(list, position-1);
   insert_node(&(list->head), p, node); 
   list->length++;
 }
} 
// ����Ʈ�� ���� �����͸� �����Ѵ�.
void add_last(ListType *list, element data)
{
	add(list, get_length(list), data);
}  
// ����Ʈ�� ���� �����͸� �����Ѵ�.
void add_first(ListType *list, element data)
{
	add(list, 0, data);
}  
//
int is_empty(ListType *list)
{
	if( list->head == NULL ) return 1;
	else return 0;
}

// �־��� ��ġ�� �����͸� �����Ѵ�.
void delete(ListType *list, int pos)
{
	if (!is_empty(list) && (pos >= 0) && (pos < list->length)){
	 ListNode *p = get_node_at(list, pos-1);
	 remove_node(&(list->head),p,(p!=NULL)?p->link:NULL);
	 list->length--;
	}
}  
//
element get_entry(ListType *list, int pos)
{
	ListNode *p;
	if( pos >= list->length ) error("��ġ ����");
	p = get_node_at(list, pos);
	return p->data;
}
//
void clear(ListType *list)
{
	int i;
	for(i=0;i<list->length;i++)
		delete(list, i);
}
// ������ ������ ����Ѵ�. 
void display(ListType *list)
{
	int i;
	ListNode *node=list->head;
	printf("( ");
	for(i=0;i<list->length;i++){
		printf("%d ",node->data);
		node = node->link;
	}
	printf(" )\n");
}
// ������ ���� s�� ��带 ã�´�.
int is_in_list(ListType *list, element item) 
{ 
	ListNode *p; 
	p = list->head; 	// ��� �����Ϳ������� �����Ѵ�.
	while( (p != NULL) ){
		// ����� �����Ͱ� item�̸�
		if( p->data == item ) 
			break;
		p = p->link; 
	}
	if( p == NULL) return FALSE;
	else return TRUE; 
}
//
int main()
{
	ListType list1;

	init(&list1);
	add(&list1, 0, 20);
	add_last(&list1, 30);
	add_first(&list1, 10);
	add_last(&list1, 40);

	// list1 = (10, 20, 30, 40)
	display(&list1);

	// list1 = (10, 20, 30)
	delete(&list1, 3);
	display(&list1);

	// list1 = (20, 30)
	delete(&list1, 0);
	display(&list1);

	printf("%s\n", is_in_list(&list1, 20)==TRUE ? "����": "����");
	printf("%d\n", get_entry(&list1, 0));

}
