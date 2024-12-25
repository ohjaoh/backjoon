#include <stdio.h>	
int main() {
	int n, score[1000];
	float new_score = 0, avg = 0, max = 0;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		if (max < score[i]) {
			max = score[i];
		}
	}

	for (int j = 0; j < n; j++) {
		avg += (float)score[j] / max * 100;
	}

	avg =  avg/ n;
	printf("%f", avg);


	return 0;

}