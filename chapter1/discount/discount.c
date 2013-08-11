#include <stdio.h>

int main(){
    int total = 0;
    scanf("%d", &total);
    if ( 95*total < 300){
        printf("%d", 95*total);
    }
    else{
        printf("%.2f", 95*total*0.85);
    }
    return 0;
}
