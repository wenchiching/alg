#include <stdio.h>

int main(){
	FILE *f1 = NULL;
	int num1 = 0, num2 = 0;
	char char1[10] = {0};
	f1 = fopen("calculator.in", "r");
	do{
		fscanf(f1, "%d%*s%d", &num1, char1, &num2);
		printf("%d%s%d\n", num1, char1, num2);
	}while( 1 );
	return 0;
}
