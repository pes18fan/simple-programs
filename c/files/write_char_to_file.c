#include <stdio.h>

int main(void) {
    FILE* fp = fopen("filec.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;

    printf("Enter some characters.\n");
    while ((ch = getchar()) != '\n') {
        fputc(ch, fp);
    }

    fclose(fp);

    return 0;
}
