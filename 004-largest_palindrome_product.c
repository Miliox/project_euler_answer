#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void reverse_string(char * dst, char * src) {
    int len = strlen(src);
    int i = 0;
    for (i = 0; i < len; i++) {
        dst[i] = src[len - i - 1];
    }
    dst[i] = '\0';
}

int main (int argv, char ** argc) {
    char str_v[9];
    char rev_v[9];

    int i = 0;
    int j = 0;
    int v = 0;

    int max = 0;
    for (i = 100; i < 1000; i++) {
        for (j = 100; j < 1000; j++) {
	    v = i * j;
	    sprintf(str_v, "%d", v);
	    reverse_string(rev_v, str_v);
            if (strcmp(str_v, rev_v) == 0 && v > max) {
		printf("%d x %d = %s\n", i, j, str_v);
                max = v;
            }
	}
    }

    printf("%d", max);
    return 0;
}
