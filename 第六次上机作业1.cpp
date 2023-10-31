#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[20], num[12] = {0};
	for (int i = 0; i < 20; i++) {
		a[i] = rand() % 10 + 1;
		printf("%d ", a[i]);
	}
	for (int i = 0; i < 20; i++) {
		num[a[i]]++;
	}
	printf("\n");
	for (int i = 0; i <= 10; i++) {
		if (num[i] >= 1)
			printf("%d ", i);
	}
	return 0;

}