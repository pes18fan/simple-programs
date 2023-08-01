#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char name[50];
    char nationality[20];
    int books_published;
} Author;

int main(void) {
    FILE* fp = fopen("authors.bin", "wb+");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    Author author;
    char choice;
    int n;

    do {
        printf("Enter the name of the author: ");
        fgets(author.name, 50, stdin);
        printf("Enter the nationality of the author: ");
        fgets(author.nationality, 20, stdin);
        printf("Enter the number of books published by the author: ");
        scanf("%d", &author.books_published);

        fwrite(&author, sizeof(Author), 1, fp);
    
        printf("Continue? (y/n) ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    rewind(fp);

    printf("Which author's details do you want to see? ");
    scanf("%d", &n);

    int i = 0;
    bool found = false;
     
    while (fread(&author, sizeof(Author), 1, fp) == 1) {
        if (i + 1 == n) {
            found = true;
            break;
        }
    }
    
    if (!found) {
        printf("No such author\n");
        return 1;
    }

    printf("Author found:\n");
    printf("Name: %s", author.name);
    printf("Nationality: %s", author.nationality);
    printf("Number of books published: %d\n", author.books_published);

    fclose(fp);

    return 0;
}
