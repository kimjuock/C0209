#include <stdio.h>

void sum(int a, int b) {
	int result = a + b;
	printf("%d + %d = %d", a, b, result);
}

void sub(int a, int b) {
	int result = a - b;
	printf("%d - %d = %d", a, b, result);
}

void mul(int a, int b) {
	int result = a * b;
	printf("%d X %d = %d", a, b, result);
}

void div(int a, int b) {
	int result = a / b;
	printf("%d / %d = %d", a, b, result);
}

void calculator(int selector, int num1, int num2) {

	if (selector == 1) sum(num1, num2);
	else if (selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);
}

int main(void) {
	int sel=0, num1, num2;

	printf("숫자 1을 입력하시오:");
	scanf_s("%d", &num1);

	printf("숫자 2를 입력하시오: ");
	scanf_s("%d", &num2);

	printf("1.더하기 2.빼기 3.곱하기 4.나누기: ");
	scanf_s("%d", &sel);

	calculator(sel, num1, num2);
}