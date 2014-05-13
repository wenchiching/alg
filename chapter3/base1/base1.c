#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp1 = NULL;
	int b = 0, n = 0, i = 0;
	int result[100] = {0};
	fp1 = fopen("base.in", "r");
	fscanf(fp1, "%d %d", &b, &n);
	while( 1 ){
		result[i] = n%b;
		n = n/b;
		i++;
		if( n == 0 ){
			break;
		}
	}
	i--;
	for( ; i >= 0 ; i--){
		printf("%d", result[i]);
	}
	printf("\n");
	return 0;
}
