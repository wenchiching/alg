#include <stdio.h>

void swap(int* a, int* b){
    int* c = NULL;
    c = a;
    a = b;
    b = c;
}

int main(){
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if( a<b ) swap(&a,&b);
    printf("%d %d", a, b);
    return 0;
}
