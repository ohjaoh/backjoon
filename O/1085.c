#include <stdio.h>
int main() {
	int x = 0, y = 0, w = 0, h = 0, i = 0, k = 0;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	i = w - x;
	k = h - y;

	//x , y �� ���� �༮�� �Ǿ �ݺ��� Ż���� ��� -->while�� for�� �ٲ�� �ð��ʰ��ذ��ΰ�? --> while���ѹݺ����� �������ϳ�?
	//--> ���� �𸣴� ������ �ֳ�? x y w h �� �����ϱ� int �°� ������ w-x�� h-y�� ���̳ʽ��� �ƴϰ�
	//�� 1�̻��̴ϱ� if 0�϶��� �ʿ������ �̰ǰ�? --> �ƴϳ�?
	//...? ���� �� �� �ݺ��� ����? ������ ���� �³�?

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