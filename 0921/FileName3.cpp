#include <stdio.h>

int acc(int num) {
	if (num == 0) return 1;

	return num * acc(num - 1);
}

int main(void) {
	int num;
	printf("����� ���丮�� �� �Է�: ");
	scanf_s("%d", &num);

	printf("%d! = %d", num, acc(num));

	return 0;
}