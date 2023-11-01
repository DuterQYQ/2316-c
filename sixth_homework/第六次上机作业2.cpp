#include <stdio.h>

int main() {
	int a[101], num = 0;
	for (int i = 1; i <= 100; i++)
		a[i] = 1;

	for (int i = 2; i <= 100; i++) {
		for (int j = 2; j < i && j <= 10; j++) {
			if (i % j == 0) {
				a[i] = 0;     //筛数法
				break;
			} else
				continue;
		}
	}
	a[1] = 0;
	a[2] = 1;
	for (int i = 2; i <= 100; i++) {

		if (a[i] == 1) {
			printf("%d ", i);
			num++;
		}
	}
	printf("\n100内的素数有");
	printf("%d个", num);
	return 0;
}