// WAP to print size of char, float, double and long double data
#include <stdio.h>

int main(void) {
	char a = 'a';
	float b = 6.9420;
	double c = 6.94209420;
	long double d = 6.942094209420;

	printf("Sizes of char, float, double and long double:\n%zu %zu %zu %zu", sizeof(a), sizeof(b), sizeof(c), sizeof(d));

	return 0;
}
