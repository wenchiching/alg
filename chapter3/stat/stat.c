#include <stdio.h>
#include <math.h>
#define MAX 1000

int main(){
	FILE *p1, *p2;
	p1 = fopen("1.txt", "r");
	p2 = fopen("2.txt", "r");
	int i, j;
	int count_num1 = 0, num1[MAX] = {-1}, count1[MAX] = {0}, max_count1 = 0;
	int count_num2 = 0, max_count2 = 0;
	float num2[MAX] = {-1}, count2[MAX] = {0};
	float j2;

	if ( p1 == NULL ) {
		perror("Error opening file!");
	}
	else{
		while( fscanf(p1, "%d,", &num1[count_num1]) != EOF ){
			//printf("%d\n", num1[count_num1]);
			count_num1++;
		}
		//printf("%d numbers\n", count_num1);
		i = count_num1;
		for( i = 0; i < count_num1; i++){
			for( j = 0; j < count_num1; j++){
				if( num1[i] == num1[j] ){
					count1[j]++;
				}
			}
		}
		for( i = 0; i < count_num1; i++){
			//printf("%d\n", count1[i]);
			if( count1[i] > max_count1){
				max_count1 = count1[i];
			}
		}
		//printf("max_count1 = %d\n", max_count1);
		for(j = 0; j < 100; j++){
			for(i = 0; i < MAX; i++){
				if(j == num1[i] && count1[i] == max_count1){
					printf("Mode is %d\n", num1[i]);
					break;
				}
			}
		}
		fclose(p1);
	}

	if ( p2 == NULL ) {
		perror("Error opening file!");
	}
	else{
		while( fscanf(p2, "%f,", &num2[count_num2]) != EOF ){
			//printf("%.2f\n", num2[count_num2]);
			count_num2++;
		}
		//printf("%d numbers\n", count_num2);
		i = count_num2;
		for( i = 0; i < count_num2; i++){
			for( j = 0; j < count_num2; j++){
				if( num2[i] == num2[j] ){
					count2[j]++;
				}
			}
		}
		for( i = 0; i < count_num2; i++){
			//printf("%.2f\n", count2[i]);
			if( count2[i] > max_count2){
				max_count2 = count2[i];
			}
		}
		//printf("max_count2 = %d\n", max_count2);
		for(j2 = 0; j2 < 100; j2+=0.01){
			//printf("%f\n", j2);
			for(i = 0; i < MAX; i++){
				if( (fabs(j2 - num2[i]) < 0.001) && count2[i] == max_count2){
					printf("Mode is %.2f\n", num2[i]);
					break;
				}
			}
		}
		fclose(p2);
	}

	return 0;
}
