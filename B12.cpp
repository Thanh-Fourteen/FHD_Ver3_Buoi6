#include<stdio.h>
#include<math.h>

int main () {
	int g,l;
	scanf("%d%d",&g,&l);
	if(l % g != 0) {
		printf("-1");
	} else {
		int n = l / g;
		long long kq = 1e18;
		for(int i = 1; i <= sqrt(n); i++) {
			if(n % i == 0) {
				int x = i;
				int y = n / i;
				int A = x * g;
				int B = y * g;
				if(A + B < kq) {
					kq = A + B;
				}
			}
		}
		printf("%lld",kq);
	}
}

