#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//srand(time(0));
	printf("给出一个含0，9的示例方阵\n");
	int  max[10] = {0}, min[10];
	int a[10][10] = {
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
		{31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
		{41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
		{51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
		{61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
		{71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
		{81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
		{91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
	};
	for (int i = 0; i < 10; i++)
		min[i] = 101;

	for (int i = 0, k = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {


			if (min[j] >= a[k][j])
				min[j] = a[k][j];

			if (max[i] <= a[i][j])
				max[i] = a[i][j];
		}
		k++;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			printf(" %d    ", a[i][j]);
		printf("\n");
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", min[i]);
	printf("最小值\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", max[i]);
	printf("最大值\n");

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++) {
			if (a[i][j] == min[j] && a[i][j] == max[i])
				printf("该下标为(%d,%d) ", i, j);
		}
	return 0;
}