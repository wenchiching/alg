#include <stdio.h>

int main(){
    float n = 0;
    scanf("%f", &n);
    if( n<0 ){
        n = -n;
    }
    printf("%.2f", n);
    return 0;
}
