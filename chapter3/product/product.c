#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
	FILE *f1 = NULL;
	int ascii_code = 0, i = 0, j = 0;
	int isminus = 0;
	int num[10], num2 = 1, num3 = 1;

	memset(num, '\0', sizeof(num));
	f1 = fopen("product.in", "r");
	while( 1 ){
		ascii_code = fgetc(f1);
		if( isdigit(ascii_code) ){
			//is digital
			num[i] = ascii_code - 48;
			//printf("ascii_code = %d\n", num[i]);
			i++;
		}else if( ascii_code == 10 ){
			//new line
			j = 0;
			for( ; i > 0 ; i-- ){
				//printf("num[%d] = %d", i-1, num[i-1]);
				num2 += (num[i-1] * pow(10, j));
				//printf(", num2 = %d\n", num2);
				j++;
			}
			if (isminus ){
				num2 = -num2;
			}
			printf("%d", num2);
			printf("%c", ascii_code);
			num3 *= num2;
			isminus = 0;
			i = 0;
			num2 = 1;
			memset(num, '\0', sizeof(num));
		}else if( ascii_code == 45){
			//minus
			isminus = 1;
		}else if( ascii_code == EOF){
			//end of file
			break;
		}
	}
	printf("product = %d\n", num3%1000);
	return 0;
}
