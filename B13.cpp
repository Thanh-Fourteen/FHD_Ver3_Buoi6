#include <stdio.h>

int xuly_d(long long n) {
	if (n % 5 == 0 || n % 5 == 1) {
		return 1;
	} else if (n % 5 == 2) {
		return 2;
	} else if (n % 5 == 3) {
		return 6;
	} else if (n % 5 == 4) {
		return 4;
	}
}

int xuly_i(long long n) {
	if (n % 4 == 0) {
		return 6;
	} else if (n % 4 == 1) {
		return 2;
	} else if (n % 4 == 2) {
		return 4;
	} else if (n % 4 == 3) {
		return 8;
	}
}

int slove (long long n){
	int kq = 1;
	while (1) {
		int f = xuly_i(n / 5);
		int d = xuly_d(n);
		kq *= d * f;
		kq %= 10;		// chi can lay chu so cuoi cung
		n = n / 5;
		if (n == 0) {
			return kq;
		}
	}
}

int main() {
	int q;
	scanf("%d", &q);
	while(q--){
		long long n;
		scanf("%lld", &n);
		if (n == 0 || n == 1) {
			printf("1\n");
		} else {	
			printf("%d\n", slove (n));
		}
	}	
}
