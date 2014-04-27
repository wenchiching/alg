#include <stdio.h>

int main(){
	double n = 0, m = 0;
	float subsequence = 0;
	scanf("%lf %lf", &n, &m);
	while( n <= m ){
		subsequence += 1.0/(n*n);
		n++;
	}
	printf("%.5f\n", subsequence);
	return 0;
}
