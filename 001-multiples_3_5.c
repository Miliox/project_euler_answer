#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    int sum = 0;
    int max = 1000;

    int i = 0;
    for (i = 0; i < max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
	    sum += i;
	}
    }
    printf("%d", sum);
    return 0;
}
