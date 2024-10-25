#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			int print = (i == j) ? n : (n - i + j) % n;
			printf("%d ", print);
		}
		printf("\n");
	}
}
