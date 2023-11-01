#include <stdio.h>

int main() {
	double n = 3, m = 3, grade[3][3] = {{85, 90, 80}, {70, 75, 85}, {90, 95, 100}},
	avg[10] = {0}, GPA[100] = {0}, grades[100] = {0};
	//scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			//scanf("%d", &grade[i][j]);
			avg[j] += grade[i][j];
			grades[i] += grade[i][j];
			if (grade[i][j] >= 90) {
				GPA[i] += 4 ;
			} else if (grade[i][j] >= 80) {
				GPA[i] += 3 ;
			} else if (grade[i][j] >= 70) {
				GPA[i] += 2 ;
			} else if (grade[i][j] >= 60) {
				GPA[i] += 1;
			}
		}
	for (int i = 0; i < m; i++)
		printf("第%d科学生的平均分数为 %lf\n", i + 1, avg[i] / n);
	printf("\n");
	for (int i = 0; i < n; i++)
		printf("%d号学生学分的平均分数 %lf\n", i + 1, grades[i] / m);
	printf("\n");
	for (int i = 0; i < n; i++)
		printf("%d号学生学分的平均绩点 %lf\n", i + 1, GPA[i] / m);
	return 0;

}