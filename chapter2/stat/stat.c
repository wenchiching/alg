#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0, i = 0, m = 0, result = 0;
    int *ip;
    FILE *fin, *fout;
    fin = fopen("stat.in", "r");
    fout = fopen("stat.out", "w");
    fscanf(fin, "%d", &n);
    ip = malloc(sizeof(int)*n);
    for( i = 0; i < n ; i++ ){
        fscanf(fin, "%d", &ip[i]);
    }
    fscanf(fin, "%d", &m);
    for( i = 0 ; i < n ; i++){
        if( ip[i] < m){
            result++;
        }
    }
    fprintf(fout, "%d", result);
    return 0;
}
