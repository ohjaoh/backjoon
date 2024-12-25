#include<stdio.h>
int main() {
	int count = 0, b = 0;
	char str[257], an[] = { 'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U' };
	for (;;) {
		
		for (int i = 0; i < 255; i++) {
			scanf("%c", &str[i]);
			if (str[i] == '#') {
				b = 1;
				break;
			}
			for (int k = 0; k < 10; k++) {
				if (str[i] == an[k]) {
					count++;
				}
			}
			if (str[i] == '\n') {
				printf("%d\n", count);
				count = 0;
			}
		}
		if (b = 1) { break; }
	}


	return 0;
}