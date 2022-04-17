#include "queue.h"

struct node {
	Item data;
	Node next;
};

struct queue {
	Node front;	// ªË¡¶
	Node rear;	// ª¿‘
	int size;
};

void Terminate(const char* message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}