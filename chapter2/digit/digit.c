#include <stdio.h>

int main(){
    FILE *fp_in, *fp_out;
    int in = 0, i = 1;
    fp_in = fopen("digit.in", "r");
    fp_out = fopen("digit.out", "w");
    fscanf(fp_in, "%d", &in);
    do{
        i++; 
    }while( (in /= 10) > 1);
    fprintf(fp_out, "%d", i);
    return 0;
}
