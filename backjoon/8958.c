#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int t, sum, score; char arr[80];
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		sum = 0, score = 1;
		scanf("%s", arr);
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j]=='O') {
				sum += score;
				score++;
			}
			else if (arr[j]=='X') {
				score = 1;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}