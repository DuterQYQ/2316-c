#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble(int *a, int n) {
	int s;

	for (int i = 0; i < n; i++) {
		int tem = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] >= a[j + 1]) {
				s = a[j];
				a[j] = a[j + 1];
				a[j + 1] = s;
				tem = 1;
			}
		}
		if (tem == 0)
			break;
	}
}

int main() {
	int n;
	printf("输入n");
	scanf("%d", &n);
	int a[10000];
	srand(time(0));
	printf("A数组为 \n");
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100 + 1;//数据范围为1到100
		printf("%d   下标 %d\n", a[i], i);
	}
	bubble(a, n);  //冒泡一下
	printf("\n有序数组为 ");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);

	return 0;
}