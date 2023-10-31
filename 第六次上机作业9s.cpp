#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int a[10][10];
	int  max[10] = {0}, min[10] = {101};
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++) {
			a[i][j] = rand() % 100 + 1;
			if (a[i][j] < min[i])
				min[i] = a[i][j];
			if (a[i][j] > max[j])
				max[j] = a[i][j];
		}
	printf("ÓÐÐ§ \n");
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++) {
			if (a[i][j] == min[i] && a[i][j] == max[j])
				printf("%d,%d ", i, j);
		}
	return 0;
}

