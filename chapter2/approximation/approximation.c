#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float i = 1, j = 0, pi = 0;
	int sign = -1;
	while(1){
		j = 1.0/(2*i-1);
		pi += (j)*sign;
		i++;
		sign = -sign;
		printf("%f\n", pi*4);
		if(j<0.000001){
			break;
		}
	}
	return 0;
}
