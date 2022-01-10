#include <stdio.h>

int main() {

    int num;
    
    printf("Enter Any Number To Check Weather It is Even Or Odd: ");
    scanf("%d",&num);
    
        if (num % 2 == 0) {
        
        printf("%d is: Even",num);
    }
    else{
        printf("%d is: Odd",num);
    }
    printf("\n");

    
    for (int i=0; i<=100; i++) {
        
        if (i % 2 == 0) {
            
            printf("\n%d is: Even",i);
        }
        else{
            printf("\n\t\t%d is: Odd",i);
        }
    }
    
    printf("\n");
    return 0;
}
