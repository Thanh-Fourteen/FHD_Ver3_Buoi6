#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int time = 0;
    int r=0;
    
    while(n != 0){
        time += n;
        n += r; 
        n = n / m;   // So nen tai che
        r = n % m;   // So nen tai che nhung bi du
    }

    printf("%d", time);
    return 0;
}
