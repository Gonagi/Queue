#ifndef __QUEUE_H__
#define __QUEUE_H__

#endif
#include <stdio.h>
#include <cstdlib>
#include <stdbool.h>

typedef struct node* Node;
typedef struct queue* Queue;
typedef int Item;

void Terminate(const char*);
Node Create_node();
Queue Create_queue();
void Enqueue(Queue, Item);
Item Dequeue(Queue);
Item Peek(Queue queue);
bool Is_empty(Queue);