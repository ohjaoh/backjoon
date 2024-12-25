#include<stdio.h>
int main() {
	int h, m, s, d;
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &d);
	for (int i = 0; i < d; i++) {
		s = s + 1;
		if (s > 59) {
			m += 1;
			s = 0;
		}
		if (m > 59) {
			h += 1;
			m = 0;
		}
		if (h > 23) {
			h = 0;
		}
	}
	printf("%d %d %d", h, m, s);

	return 0;
}