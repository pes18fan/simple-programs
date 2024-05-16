// wap to count the number of characters and words in a sentence
// 1. Start
// 2. Declare variables sentence[100], characters = 0, words = 0
// 3. Read sentence
// 4. Loop from 0 while sentence[i] != '\0'
//   i. If sentence[i] is a space, tab or newline, increment words
//   ii. Else increment characters
// 5. Decrement characters by 1
// 6. Print words and characters
// 7. Stop
#include <stdio.h>

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
