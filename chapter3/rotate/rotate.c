#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 10

int main(){
	FILE *f1 = NULL;
	char array_in[MAX_LENGTH][MAX_LENGTH];
	int i = 0, length = 0, j = 0;
	memset(array_in, '\0', MAX_LENGTH*MAX_LENGTH);
	f1 = fopen("rotate.in", "r");
	while( fgets(array_in[i], MAX_LENGTH, f1) != NULL ){
		//printf("%s", array_in[i]);
		i++;
	}
	length = strlen(array_in[i-1]);
	for( i = 0 ; i < length-1 ; i++ ){
		for( j = 0 ; j < length-1 ; j++){
			printf("%c", array_in[j][i]);
		}
		printf("\n");
	}
	return 0;
}
