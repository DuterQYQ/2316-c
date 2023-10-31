#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	bool s = 0;
	int n, target;
	printf("请输入数组中元素个数n和target");
	scanf("%d%d", &n, &target);
	int a[10000];
	srand(time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 + 1;
	for (int i = 0; i < n; i++) {
		if (target == a[i]) {
			s = 1;   //标记
			printf("下标为%d\n", i);
			break;
		}
	}
	if (s == 0) {
		for (int i = 0; i < n; i++) {
			printf("%d\n ", a[i]);

		}
		printf("  \n该元素不存在!");
	}

	return 0;
}