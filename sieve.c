#include <stdio.h>
#include <stdbool.h>

int primes[10001] = { 2, 3 };

int main (){
sieve(10001);
}
int sieve(int N)
{
    for (int n = 2; n < N; n++) {
        for (int x = primes[n - 1] + 2; ; x += 2) {
            bool prime = true;
            for (int i = 0; i < n; i++) {
                int p = primes[i];
                if (p * p > x) {
                    break;
                }
                if (x % p == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime) {
                primes[n] = x;
                break;
            }
        }
    }

    printf ("%d\n", primes[N - 1]);
}
