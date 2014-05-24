#include <stdio.h>
#include <stdlib.h>

int findMMC(int n1, int n2) {
    int mmc = 1;
    int i = 0;
    for (i = 2; n1 > 1 ||  n2 > 1; i++) {
        while (n1 % i == 0 || n2 % i == 0) {
	    mmc *= i;
	    if (n1 % i == 0) {
	        n1 /= i;
	    }
	    if (n2 % i == 0) {
	        n2 /= i;
	    }
	}
    }
    return mmc;
}

int main (int argv, char ** argc) {
    int mmc = 1;
    int i = 0;
    for (i = 1; i <= 20; i++) {
        mmc = findMMC(i, mmc);
    }
    printf("%d", mmc);
    return 0;
}
