#include <stdio.h>

int main(){
    float f = 0;
    scanf("%f", &f);
    printf("%.3f", (5*(f-32)/9));
    return 0;
}
