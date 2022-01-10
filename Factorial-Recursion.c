

#include <stdio.h>

int factorial(int num) {
    
    if (num == 0 || num == 1) {
        
        return 1;
    } else{
        
        return num * factorial(num - 1);
    }
}

int main(int argc, const char * argv[]) {
    
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    
    int result = factorial(num);
    
    printf("Factorial Of %d: %d ",num,result);
    
    printf("\n");
    return 0;
}
