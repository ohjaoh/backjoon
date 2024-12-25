#include <stdio.h>
int main() {
	int x = 0, y = 0, w = 0, h = 0, i = 0, k = 0;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	i = w - x;
	k = h - y;

	//x , y 가 작은 녀석이 되어서 반복문 탈출을 희망 -->while를 for로 바꿔야 시간초과해결인가? --> while무한반복으로 만들어야하나?
	//--> 내가 모르는 무엇이 있나? x y w h 는 정수니까 int 맞고 범위상 w-x나 h-y가 마이너스는 아니고
	//아 1이상이니까 if 0일때가 필요없구나 이건가? --> 아니네?
	//...? 뭐지 아 왜 반복을 했지? 젠장할 이제 맞나?

	if (i < x) {
		w = x;
		x = i;
		i = w;
	}
	if (k < y) {
		h = y;
		y = k;
		k = h;
	}

	if (x >= y) {
		printf("%d", y);
	}
	else
		printf("%d", x);

	return 0;
}