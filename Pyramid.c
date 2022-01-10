

#include <stdio.h>

int main() {
    
    int i, j, k, l;
    int space = 10;
    printf("\n");
    
    for ( i = 1; i <= 10; i++){
        for ( j = space; j >= 1; j--){
            printf(" ");
        }
        for ( k = 1; k <= i; k++){
            printf("%d",k);
        }
        for (l = i-1; l >=1 ; l--){
            printf("%d", l);
        }
        printf("\n");
        space--;
    }


    for (int m = 1; m<5; m++) {
        
        for (int n = 5-m; n >= 1; n--) {
            
            for (int ; <#condition#>; <#increment#>) {
                <#statements#>
            }
        }
    }
    printf("\n");
    return 0;
}
