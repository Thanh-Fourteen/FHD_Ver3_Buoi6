// 6.14
#include <stdio.h>

int tongChuSo(long long n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	long long n;
	scanf("%lld", &n);
	long long x, y;

	x = tongChuSo(n) * 100;
	if(x <= 100) {
		y = 8000;
	} else if(x > 100 && x <= 500) {
		y = 10000;
	} else if(x > 500 && x <= 1000) {
		y = 16000;
	} else if(x > 1000 && x <= 2000) {
		y = 20000;
	} else {
		y = 20000 + 1700 * ((x - 2000) / 500);
	}
	printf("%lld\n%lld", x, y);
	return 0;
}
