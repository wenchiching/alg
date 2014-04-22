#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 0, m = 0, i = 1;
    FILE *fin, *fout;
    fin = fopen("harmony.in", "r");
    fout = fopen("harmony.out", "w");
    fscanf(fin, "%f", &n);
    while( i<=n ){
        m += 1/i;
        i*=2;
    }
    fprintf(fout, "%f\n", m);
    return 0;
}
