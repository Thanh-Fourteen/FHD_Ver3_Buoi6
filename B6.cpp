// Con cach if else
#include <stdio.h>

void tim(int n) {
	if (n <= 0) {
		return;
	}

	tim((n - 1) / 26); 
	printf("%c", 'A' + (n - 1) % 26); 
}

int main() {
	int n;
	scanf("%d", &n);

	tim(n);
	return 0;
}

//tim(28) = tim(1)			= tim(0)		= ;
//          'A' + (27 % 26)     'A' + (0%26)
//           B				   A
//	=> AB
