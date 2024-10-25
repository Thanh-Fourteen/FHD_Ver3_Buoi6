#include <stdio.h>
#include <stdbool.h>

#define MOD 1000000007

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}


int findNthPrime(int n) {
    int count = 0;
    int num = 1;
    while (count < n) {
        num++;
        if (isPrime(num)) {
            count++;
        }
    }
    return num;
}

long long fibonacci(int n) {
    if (n <= 1) return 1;
    long long a = 1, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    scanf("%d", &n); 

    int primeIndex = findNthPrime(n); 
    long long result = fibonacci(primeIndex); 

    printf("%lld\n", result); 
    return 0;
}
