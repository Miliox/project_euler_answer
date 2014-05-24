#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argv, char ** argc) {
    long long n = 600851475143l;
    long long prime = 1;

    while (n % 2 == 0) {
	prime = 2;
        n /= 2;
    }

    long long i = 0;
    for (i = 3; i < sqrt(n); i += 2) {
        while (n % i == 0) {
	    prime = i;
	    n /= i;
	}
    }

    if (n > 2) {
        prime = n;
    }

    printf("%d", prime);
    return 0;
}
