#include <stdio.h>

int main() {
	int N = 0, temp = 0, result = 0, max = 0, max_end = 100, max_index=-1;
	int a[50] = { 0 };
	int b[50] = { 0 };
	int used[50] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", &b[i]);
	}
	// a[0]*b[0] + a[1]*b[1] + ... + a[N-1]*b[N-1]�� �ּڰ�
	// ��� -> a�� ���� ���� �༮�� b�� �ִ��� �༮�� ��ġ��Ű�� ���·� ��迭 ��Ű��
	// ���� ������ ���
	// 1.a�迭�� ���� �ͺ��� ���Ľ�Ų��. 
	// 2.a�迭�� i��° �༮�� b �迭�� ���� ū �༮�� ���ϰ� ���Ѵ�.

	// 1. a�迭�� ������������ ����
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	// 2. a[i]�� b�迭�� ���� ū �༮�� ���ϸ� ����� ����
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (max <= b[j] && !used[j]) {
				max = b[j];
				max_index = j;
			}
			// printf("(i, j)=(%d, %d)  result=%d  max=%d  max_end = %d\n", a[i], b[j], result, max, max_end);
		}

		// ���� �� ��� �κ�
		used[max_index] = 1;
		result += a[i] * max;
		max_end = max;
		max = 0;
	}

	printf("���� %d\n", result);

	return 0;
}
