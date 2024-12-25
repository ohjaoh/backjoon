#include <stdio.h>
#include <string.h>
int main(void) {
	char al[15];
	char pe[5];

	scanf("%s", al);
	for (int i = 0; i < strlen(al); i++) {
		if (strlen(al) == 1) {
			printf("..#..\n.#.#.\n#.%c.#\n.#.#.\n..#..\n", al[i]);
			break;
		}
		if ((1 + 1) % 3 == 0 && i != 0) {
			pe[0] = "..*..";
			pe[1] = ".*.*.";
			pe[2] = "*.%c.*", al[i];
			pe[3] = ".*.*."; 
			pe[4] = "..*..";
			i = i + 1;
		}
		else {
			pe[0] = "..#..";
			pe[1] = ".#.#.";
			pe[2] = "#.%c.#", al[i];
			pe[3] = ".#.#.";
			pe[4] = "..#..";
		}
		printf("%s", pe[i]);
		for(int k=0;k<5;k++){
		if (strlen(al) == i) {
			printf("%s\n", pe[k]);
		}
		}

	}


	return 0;
}