#include <stdio.h>
#include <stdlib.h>

int main(int argv, char ** argc) {
    int aux = 0;
    int current = 1;
    int previous = 0;

    int max = 4 * 1000 * 1000;
    int sum = 0;
    while (current < max) {
        if (current % 2 == 0) {
	    sum += current;
	}
	current += previous;
	previous = current - previous;
    }

    printf("%d", sum);
    return 0;
}
