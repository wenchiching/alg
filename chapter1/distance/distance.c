#include <stdio.h>
#include <math.h>

int main(){
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("%.3f", sqrt((pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0))));
    return 0;
}
