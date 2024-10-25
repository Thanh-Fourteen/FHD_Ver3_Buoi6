// con cach gcd(a,b) = gcd(b, a%b)
#include<stdio.h>

int main() {
	long long a,b;
	long long gcd,lcm;
	scanf("%lld%lld", &a, &b);
	long long x=a,y=b;
	
	while(x!=y) {
		if(x>y) x-=y;
		else y-=x;
	}
	
	gcd=x;
	lcm=(a*b)/gcd;
	printf("%lld\n", gcd+lcm);
}

