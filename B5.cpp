#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n - i; ++j){
			printf("  ");
		}
		
		char x = 'a';
		for(int j = 0; j < i; ++j){
			printf("%c   ", x + j);
		}
		printf("\n");
	}
}
