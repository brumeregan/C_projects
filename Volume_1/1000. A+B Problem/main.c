#include <stdio.h>

int main(int ARGC, char * ARGV[])
{
	int a, b, result;
	if (ARGC > 2) {
		a = atoi(ARGV[1]);
		b = atoi(ARGV[2]);
	}
	else {
		printf("Enter first number:\n");
		scanf("%d", &a);
		printf("Enter second number:\n");
		scanf("%d", &b);
	}
	result = a + b;
        printf("Result: %d\n", result);

	return 1;
}
