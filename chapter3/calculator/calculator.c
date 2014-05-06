#include <stdio.h>

int main(){
	FILE *f1 = NULL;
	int num1 = 0, num2 = 0;
	char buf[100], op='\0';
	f1 = fopen("calculator.in", "r");
	while( fgets(buf, sizeof(buf), f1) != NULL ){
		sscanf(buf, "%d %c %d", &num1, &op, &num2);
		printf("%d %c %d\n", num1, op, num2);
		if( op == '+' ){
			// +
			printf("%d\n", num1+num2);
		}
		else if( op == '*' ){
			// *
			printf("%d\n", num1*num2);
		}
		else if( op == '-' ){
			// -
			printf("%d\n", num1-num2);
		}
	}
	return 0;
}
