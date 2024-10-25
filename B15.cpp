#include <stdio.h>
#include <math.h>

int main() {
	int t, x;
	scanf("%d %d", &t, &x);
	long long divisor = pow(10, x);

	while(t--) {
		long long a, b;
		scanf("%lld %lld", &a, &b);

		long long sum = a + b;
		
		while (sum >= divisor) 
			sum /= 10;
		printf("%lld\n", sum);
	}

	return 0;
}
