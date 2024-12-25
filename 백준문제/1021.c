#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50  // ť�� �ִ� ũ�� ���� N�� �ִ� 50�̶� ������

// ť ����ü ����
typedef struct {
	int* items;
	int front;
	int rear;
	int max;
} Queue;

// ť �ʱ�ȭ �Լ�
void initializeQueue(Queue* q, int maxSize) {
	q->items = (int*)malloc(maxSize * sizeof(int));
	if (q->items == NULL) {
		// �޸� �Ҵ� ���� ó��
		exit(1);
	}
	q->front = 0;
	q->rear = -1;
	q->max = maxSize;
}


// ť�� ��Ҹ� �߰��ϴ� �Լ�
void enqueue(Queue* q, int value) {
	if (isFull(q)) {
		printf("Queue is full\n");
	}
	else {
		if (q->front == -1) {
			q->front = 0;
		}
		q->rear++;
		q->items[q->rear] = value;
		printf("Inserted %d\n", value);
	}
}

// ť���� ��Ҹ� �����ϴ� �Լ�
int dequeue(Queue* q) {
	int item;
	if (isEmpty(q)) {
		printf("Queue is empty\n");
		item = -1;
	}
	else {
		item = q->items[q->front];
		q->front++;
		if (q->front > q->rear) {
			// ť�� ����� �� front�� rear �ε����� �缳��
			q->front = 0;
			q->rear = -1;
		}
	}
	return item;
}


// ���� �Լ�
int main() {
	int N = 0, M = 0;
	Queue myQueue;

	scanf_s("%d %d", &N, &M);
	initializeQueue(&myQueue, N);

	enqueue(&myQueue, 1);
	enqueue(&myQueue, 2);
	enqueue(&myQueue, 3);
	printf("Dequeued: %d\n", dequeue(&myQueue));
	printf("Dequeued: %d\n", dequeue(&myQueue));

	free(myQueue.items);
	return 0;
}
