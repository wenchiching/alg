#include <stdio.h>
#include <ctype.h>

int main(){
	FILE *f1 = NULL;
	int ascii_code = 0, len = 0, switcher = 1;
	float avg_len = 0;
	f1 = fopen("word.in", "r");
	if( f1 == NULL){
		printf("Error fail on open file");
		return 1;
	}
	while( 1 ){
		ascii_code = getc(f1);
		// space is 32
		if( ascii_code == 32 && switcher == 1 ){
			//printf("%d\n", len);
			avg_len += len;
			avg_len /= 2;
			//printf("%.2f\n", avg_len);
			len = 0;
			switcher = 0;
		}
		// new line is 10
		if( ascii_code == 10){
			//printf("%d\n", len);
			avg_len += len;
			avg_len /= 2;
			printf("%.2f\n", avg_len);
			break;
		}
		if( isalpha(ascii_code) ){
			len++;
			switcher = 1;
		}
	}
	return 0;
}
