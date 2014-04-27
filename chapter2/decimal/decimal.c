#include <stdio.h>

int main(){
	int a = 0, b = 0, c = 0, x = 0;
	scanf("%d,%d,%d", &a, &b, &c);
	printf("%d.", a/b);
	x = a%b;
	while( c > 1 ){
		printf("%d", (10*x)/b);
		x = (10*x)%b;
		c--;
	}
	if ( (10*x)/b >= 5 ){
		printf("%d", (10*x)/b+1);
	}
	else{
		printf("%d", (10*x)/b);
	}
	printf("\n");
	return 0;
}
