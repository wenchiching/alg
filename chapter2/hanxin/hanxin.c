#include <stdio.h>

int main(){
    int i = 0, a = 0, b = 0, c = 0, ans = 0;
    FILE *fin, *fout;
    fin = fopen("hanxin.in", "r");
    fout = fopen("hanxin.out", "w");
    fscanf(fin, "%d %d %d", &a, &b, &c);
    for( i = 10 ; i <= 100 ; i++){
        if ( i%3 == a && i%5 == b && i%7 == c ){
            fprintf(fout, "%d", i);
            ans = 1;
            break;
        }
    }
    if ( ans == 0 ){
        fprintf(fout, "No answer");
    }
    return 0;
}
