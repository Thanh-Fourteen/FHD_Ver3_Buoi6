#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int bi;
        scanf("%d", &bi); 
        sum += bi; 
    }

    int result = 0;
	
	// sum < n: da bao gom sum < 0
	if (sum < n) result = 1;
    else result = sum - n; 

    printf("%d", result); 
    return 0;
}
