#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[100];
    int characters = 0, words = 0;

    printf("Enter a sentence\n");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        switch (sentence[i]) {
            case ' ':
            case '\t':
            case '\n':
                words++;
                break;
            default:
                characters++;
        }
    }
    characters -= 1;

    printf("There are %d words and %d characters.", words, characters);
    return 0;
}
