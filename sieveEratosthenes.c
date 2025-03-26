/*
    Sieve of Eratosthenes – O(N*log(log(n))) Time and O(n) Space

    The Sieve of Eratosthenes works by iteratively marking the multiples of each prime starting from 2, marking them as non-prime, and continuing this process up to sqrt(n), leaving only the prime numbers unmarked. It is one of the most efficient ways to find all prime numbers smaller than n when n is smaller than 10 million or so.
*/

#include<stdio.h>
#include<math.h>

void sieve(int primes[], int num) {

    int sqrtNum = sqrt(num);

    for(int i = 2; i <= sqrtNum; ++i) {
        if(primes[i] == 1) {
            int multiple=2;
            while(i*multiple <= num) {
                primes[i*multiple] = 0;
                ++multiple;
            }
        }
    }
}

int main() {
    int num;
    printf("Enter the number upto which you want to find prime numbers: ");
    scanf("%d", &num);

    // Initialize an array of size num+1 with all elements as 1, i.e., consider all numbers as prime initially
    int primes[num+1];

    primes[0] = 0, primes[1] = 0;
    for(int i=2; i<=num; ++i) {
        primes[i] = 1;
    }
    sieve(primes, num);
    printf("Prime numbers from 1 to %d are: ", num);
    for(int i=2; i<=num; ++i) {
        if(primes[i] == 1) {
            if(i == 2) {
                printf("%d", i);
            } else {
                printf(", %d", i);
            }
        }
    }
    return 0;
}