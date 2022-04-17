#include "queue.h"

struct node {
	Item data;
	Node next;
};

struct queue {
	Node front;	// »èÁ¦
	Node rear;	// »ğÀÔ
	int size;
};