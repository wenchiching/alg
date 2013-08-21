#include <stdio.h>

int main(){
    int n = 0, m = 0, i = 0;
    scanf("%d", &n);
    for( ; n > 0 ; n-- ){
        for( i = 0 ; i < m ; i++ ){
            printf(" ");
        }
        for( i = 0 ; i < 2*n-1 ; i++ ){
            printf("#");
        }
        printf("\n");
        m++;
    }
    return 0;
}
