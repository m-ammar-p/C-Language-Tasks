

#include <stdio.h>

int power(int base, exponent) {
    
    if (exponent == 0) {
        
        return 1;
    }
    else {
        
        return base * power(base, exponent - 1);
    }
}
int main(int argc, const char * argv[]) {
    
    int base,exponent;
    
    printf("Enter Base: ");
    scanf("%d",&base);
    
    printf("Enter Exponent: ");
    scanf("%d",&exponent);
    
    int result = power(base, exponent);
    
    printf("%d^%d: %d",base,exponent,result);
    
    printf("\n");
    return 0;
}
