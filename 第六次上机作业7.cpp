#include <stdio.h>

int main() {

	char c;
	printf("ÊäÈëÔËËã·û+»ò*\n");
	scanf("%c", &c);
	int A[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int B[3][3] = {
		{11, 12, 13 },
		{14, 15, 16},
		{17, 18, 19}
	};
	int C[3][3];
	if (c == '+')
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				C[i][j] = A[i][j] + B[i][j];
			}
		}

	if (c == '*')
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				C[i][j] = 0;
				for (int k = 0; k < 3; k++) {
					C[i][j] += A[i][k] * B[k][j];
				}
			}
		}
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++)
			printf("%d ", C[i][j]);
		printf("\n");

	}
	return 0;

}