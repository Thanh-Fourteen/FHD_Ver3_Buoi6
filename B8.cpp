#include <stdio.h>

void solve (int n,int k) {
	if ( 1ll * k * k <= n && (n % 2 == k % 2)) {
		printf ("YES\n");
	} else {
		printf ("NO\n");
	}
}

int main () {
	int q;
	scanf ("%d",&q);
	while (q--) {
		int n,k;
		scanf ("%d%d",&n,&k);
		solve(n,k);
	}
	return 0;
}
