#include <stdio.h>	
int main() {
	int n, m = 0;
	float score[1000];
	int new_score = 0;
	float avg, total = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%f", &score[i]);
		if (score[i] < score[i + 1]) {
			m = score[i + 1];
		}
		else if (score[i] >= score[i + 1]) {
			m = score[i];
		}
	}
	for (int j = 0; j < n; j++) {
		new_score = score[j] * 100 / m;
		score[j] = new_score;
		total += score[j];
	}
	avg = total / n;

	printf("%f", avg);


	return 0;

}