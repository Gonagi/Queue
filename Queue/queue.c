#include "queue.h"

struct node {
	Item data;
	Node next;
};

struct queue {
	Node front;	// »èÁ¦
	Node rear;	// »ðÀÔ
	int size;
};

void Terminate(const char* message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

Node Create_node()
{
	Node new_node = (Node)malloc(sizeof(struct node));
	if (new_node == NULL)
		terminate("Error in Create_node : Node could not be created.");
	
	new_node->data = NULL;
	new_node->next = NULL;
	
	return new_node;
}

Queue Create_queue()
{
	Queue new_queue = (Queue)malloc(sizeof(struct queue));
	if (new_queue == NULL)
		terminate("Error in Create_queue : Queue could not be created.\n");
	
	new_queue->front = NULL;
	new_queue->rear = NULL;
	new_queue->size = NULL;
	
	return new_queue;
}

void Enqueue(Queue queue, Item data)
{
	if (queue == NULL)
		terminate("Error in Enqueue : queue is empty.");

	Node new_node = Create_node();
	new_node->data = data;

	if (Is_empty(queue)) {
		queue->front = new_node;
		queue->rear = new_node;
		queue->size++;
	}

	else {
		new_node->next = queue->front;
		queue->front = new_node;
	}
}


