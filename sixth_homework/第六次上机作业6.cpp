#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int a[2][1000] = {0}, ran[20], ip2 = 0, ip1 = 0;
	for (int i = 0; i < 20; i++) {
		ran[i] = rand() % 100 + 1;
		printf("%d ", ran[i]);
	}
	for (int i = 0; i < 20; i++) {
		if (ran[i] % 2 == 0) {
			a[0][ip1] = ran[i];
			ip1++;

		} else {
			a[1][ip2] = ran[i];
			ip2++;
		}
	}
	printf("\nbegin   \n");
	int s1 = 0, s2 = 0;
	for (int i = 0; i <= ip1 || i <= ip2; i++) {
		if (s1 < ip1) {
			printf("%d ", a[0][s1]);
			s1++;
		}

		if (s2 < ip2) {
			printf("%d ", a[1][s2]);
			s2++;
		}

		printf("\n");
	}

	printf("\n偶数有%d个\n奇数有%d个\n", ip1, ip2);
	return 0;
}