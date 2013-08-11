#include <stdio.h>

void swap(int* a, int* b){
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if( a < b ) swap(&a,&b);
    if( a < c ) swap(&a,&c);
    if( b < c ) swap(&b,&c);
    if( a >= b+c ) printf("not a triangle");
    if( a*a == b*b+c*c ){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
