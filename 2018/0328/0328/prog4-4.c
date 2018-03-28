#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST_SIZE 100 // �迭�� �ִ�ũ��

typedef int element;
typedef struct {
	element list[MAX_LIST_SIZE];	  // �迭 ����
	int length;		  // ���� �迭�� ����� �ڷ���� ����
} ArrayListType;

// ���� ó�� �Լ�
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
// ����Ʈ �ʱ�ȭ
void init(ArrayListType *L)
{
	L->length = 0;
}
// ����Ʈ�� ��� ������ 1�� ��ȯ
// �׷��� ������ 0�� ��ȯ
int is_empty(ArrayListType *L)
{
	return L->length == 0;
}
// ����Ʈ�� ���� �� ������ 1�� ��ȯ
// �׷��� ������ 0�� ��ȯ
int is_full(ArrayListType *L)
{
	return L->length == MAX_LIST_SIZE;
}
// ����Ʈ ���
void display(ArrayListType *L)
{
	int i;
	for (i = 0; i<L->length; i++)
		printf("%d\n", L->list[i]);
}
// position: �����ϰ��� �ϴ� ��ġ
// item: �����ϰ��� �ϴ� �ڷ�
void add(ArrayListType *L, int position, element item)
{
	if (!is_full(L) && (position >= 0) &&
		(position <= L->length)) {
		int i;
		for (i = (L->length - 1); i >= position; i--)
			L->list[i + 1] = L->list[i];
		L->list[position] = item;
		L->length++;
	}
}
// position: �����ϰ��� �ϴ� ��ġ
// ��ȯ��: �����Ǵ� �ڷ�
element delete(ArrayListType *L, int position)
{
	int i;
	element item;

	if (position < 0 || position >= L->length)
		error("��ġ ����");
	item = L->list[position];
	for (i = position; i<(L->length - 1); i++)
		L->list[i] = L->list[i + 1];
	L->length--;
	return item;
}

//���� �Լ�
void main()
{
	ArrayListType list1;
	ArrayListType *plist;

	// ListType�� �������� �����ϰ� ListType�� ����Ű��
	// �����͸� �Լ��� �Ķ���ͷ� �����Ѵ�.
	init(&list1);
	add(&list1, 0, 10);
	add(&list1, 0, 20);
	add(&list1, 0, 30);
	display(&list1);

	// ListType�� �������� �����ϰ� ListType�� ����Ű�� 
	// �����͸� �Լ��� �Ķ���ͷ� �����Ѵ�.
	plist = (ArrayListType *)malloc(sizeof(ArrayListType));
	init(plist);
	add(plist, 0, 10);
	add(plist, 0, 20);
	add(plist, 0, 30);
	display(plist);
	free(plist);
}