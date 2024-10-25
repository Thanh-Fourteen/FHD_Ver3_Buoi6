#include <stdio.h>

int main(){
	int n, h = 1;
	scanf("%d", &n);
	for(int i = 1; i >= 1; i += h){
		for(int j = 1; j <= n - i; ++j){
			printf("  ");
		}
		
		int d = 1;
		for(int j = 1; j >= 1; j += d){
			printf("%d ", j);
			if(j == i) d = -1;
		}
		
		for(int j = 1; j <= n - i; ++j){
			printf("  ");
		}
		
		if(i == n) h = -1;
		printf("\n");
	}
}
