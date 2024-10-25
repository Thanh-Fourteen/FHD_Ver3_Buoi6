#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n - i; ++j){
			printf("  ");
		}
		
		int d = 1;
		for(int j = 1; j >= 1; j += d){
			printf("%d ", j);
			if(j == i) d = -1;
		}
		printf("\n");
	}
}
