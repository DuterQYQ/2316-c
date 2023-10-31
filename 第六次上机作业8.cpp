#include <stdio.h>  //yanghui

int main() {
	int a[12][12] = {0};
	for (int i = 1; i <= 10; i++)
		a[i][1] = 1;
	printf("%d \n", a[1][1]);
	for (int i = 2; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {

			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}