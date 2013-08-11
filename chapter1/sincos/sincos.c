#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf", sin(n*M_PI/180));
    printf("%lf", cos(n*M_PI/180));
    return 0;
}
