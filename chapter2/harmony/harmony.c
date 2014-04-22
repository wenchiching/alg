#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 0, m = 0;
    FILE *fin, *fout;
    fin = fopen("harmony.in", "r");
    fout = fopen("harmony.out", "w");
    fscanf(fin, "%f", &n);
    while( n>=1 ){
        m += 1/n;
        n--;
    }
    fprintf(fout, "%.3f\n", m);
    return 0;
}
