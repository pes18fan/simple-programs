// wap to find the number of consonants and vowels in a string
#include <stdio.h>
#include <string.h>

int main() {
    char text[50];
    int vow = 0, cons = 0;

    printf("Enter something: ");
    scanf("%s", text);
    strupr(text);

    for (int i = 0; i < strlen(text) - 1; i++) {
	if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') vow++;
	else cons++;
    }

    printf("The text has %d vowels and %d consonants.\n", vow, cons);
}
