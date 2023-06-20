// wap to alphabetically sort entered strings
// 1. Start
// 2. Declare variables n, str[20][30], temp[20]
// 3. Read n
// 4. Read n strings into str
// 5. Loop from 0 to n-1, exclusive
//  a. Loop from i+1 to n, exclusive
//    i. if strcmp(str[i], str[j]) > 0, swap them via strcpy
// 6. Print sorted strings
// 7. Stop
#include <stdio.h>
#include <string.h>

int main() {
    char str[20][30], temp[20];
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings\n");

    for (int i = 0; i < n; i++) {
	    scanf("%s", str[i]);
    }

    for (int i = 0; i < n-1; i++) {
	    for (int j = i + 1; j < n; j++) {
	        if (strcmp(str[i], str[j]) > 0) {
    		    strcpy(temp, str[i]);
	    	    strcpy(str[i], str[j]);
		        strcpy(str[j], temp);
	        }
	    }
    }

    printf("Sorted strings are: \n");

    for (int i = 0; i < n; i++) {
	    printf("%s\n", str[i]);
    }
}
