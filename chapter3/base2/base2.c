#include <stdio.h>
#include <math.h>

int main(){
	FILE *fp1 = NULL;
	int b = 0, n = 0, dec = 0, i = 0;
	fp1 = fopen("base2.in", "r");
	fscanf(fp1, "%d %d", &b, &n);
	printf("%d %d\n", b, n);
	while( 1 ){
		dec += (n%10) * pow(b, i);
		printf("%d * %d ^ %d  = %d\n", (n%10), b, i, dec);
		i++;
		n /= 10;
		if( n == 0 ){
			break;
		}
	}
	printf("%d\n", dec);
	return 0;
}
