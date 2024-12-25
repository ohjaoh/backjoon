#include<stdio.h>
void main() {
	int b=1;
	int a = 1;

	for (int i = 1; i < 10; i++) {
		b = b * i;
		printf("%d! = %d \n", i, b);
	}
	
}