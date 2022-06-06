// wap to show a chessboard pattern
#include <stdio.h>

int main() {
    char tile = 'B';

    for (int i = 0; i < 8; i++) {
        if (tile == 'W') tile = 'B';
        else tile = 'W';	

	for (int j = 0; j < 8; j++) {
	    printf("%c", tile);

	    if (tile == 'W') tile = 'B';
	    else tile = 'W';
	}

	printf("\n");
    }
}
