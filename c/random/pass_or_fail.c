// wap to enter 5 student marks and find out how many passed and how many failed
#include <stdio.h>

int main() {
    int marks[5];
    int passed = 0;

    for (int i = 0; i < 5; i++) {
	printf("Enter marks\n");
	scanf("%d", &marks[i]);

	if (marks[i] > 40)
	    passed++;
    }

    printf("\n%d students passed and %d failed.", passed, 5 - passed);
}
