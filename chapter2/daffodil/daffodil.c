#include <stdio.h>

int main(){
    int i = 0, a = 0, b = 0, c = 0;
    for( i = 100; i <= 999; i++){
        c = i%10;
        b = ((i-c)%100)/10;
        a = ((i - c - b)%1000)/100;
        if ( i == a*a*a+b*b*b+c*c*c ){
            printf("%d\n", i);
        }
        //printf("%d%d%d\n", a, b, c);
    }
    return 0;
}
