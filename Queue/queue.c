#include "queue.h"

struct node {
	Item data;
	Node next;
};

struct queue {
	Node front;	// ����
	Node rear;	// ����
	int size;
};