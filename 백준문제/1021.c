#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50  // 큐의 최대 크기 정의 N이 최대 50이라 햇으니

// 큐 구조체 정의
typedef struct {
	int* items;
	int front;
	int rear;
	int max;
} Queue;

// 큐 초기화 함수
void initializeQueue(Queue* q, int maxSize) {
	q->items = (int*)malloc(maxSize * sizeof(int));
	if (q->items == NULL) {
		// 메모리 할당 실패 처리
		exit(1);
	}
	q->front = 0;
	q->rear = -1;
	q->max = maxSize;
}


// 큐에 요소를 추가하는 함수
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

// 큐에서 요소를 제거하는 함수
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
			// 큐가 비었을 때 front와 rear 인덱스만 재설정
			q->front = 0;
			q->rear = -1;
		}
	}
	return item;
}


// 메인 함수
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
