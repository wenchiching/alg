#include <stdio.h>

int main(){
	int i = 123, j = 0, k = 0, f = 0;
	int a[9] = {0};
	while ( i < 987/3 ){
		a[0] = i/100;
		a[1] = (i%100)/10;
		a[2] = i%10;
		a[3] = 2*i/100;
		a[4] = (2*i%100)/10;
		a[5] = 2*i%10;
		a[6] = 3*i/100;
		a[7] = (3*i%100)/10;
		a[8] = 3*i%10;
		f = 0;
		j = 0;
		while( j < 9 ){
			if ( a[j] == 0 ){
				f++;
			}
			j++;
		}
		if( f != 0 ){
			i++;
			continue;
		}
		f = 0;
		j = 0;
		while( j < 9 ){
			k = 0;
			while( k < 9 ){
				if ( a[j] == a[k] ){
					f++;
				}
				k++;
			}
			j++;
		}
#if 0
		if( f == 9 ){
			printf("%d,%d,%d\n", i, 2*i, 3*i);
		}
#else
		if( f == 9 ){
			printf("%d%d%d,%d%d%d,%d%d%d\n", a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
		}
#endif
		i++;
	}
	return 0;
}
