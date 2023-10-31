#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble(int *a, int n) {
	int s;
	for (int i = 0; i < n; i++) {
		int tem = 0;
		for (int j = 0; j <= n - i - 1; j++) {
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
	int n, m;
	printf("分别输入n，m（两个数列的个数）");
	scanf("%d%d", &n, &m);
	int a[10000], b[1000];
	srand(time(0));
	printf("A数组为 ");
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100 + 1;//数据范围为1到100
		printf("%d ", a[i]);
	}
	printf("\nB数组为");
	for (int i = 0; i < m; i++) {
		b[i] = rand() % 100 + 1;
		printf("%d ", b[i]);
		a[n + i] = b[i]; //合并数组
	}
	bubble(a, n + m);  //冒泡一下
	printf("\n有序数组为 ");
	for (int i = 1; i <= n + m; i++)
		printf("%d ", a[i]);

	return 0;
}