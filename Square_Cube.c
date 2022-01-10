#include <stdio.h>
#include <math.h>

int main() {
    
    // Input any number from user and generate its square e.g square of 8 is 64

    float num, sqr;
    
    printf("Enter Any Number To See Its Square: ");
    scanf("%f",&num);
    
    sqr = powf(num, 2.0);
    
   
    // Input any number from user and generate its cube e.g. cube of 8 is 512
    float num2, cube;
    
    printf("Enter Any Number To See Its Cube: ");
    scanf("%f",&num2);
    
    cube = powf(num2, 3.0);
    
    printf("Square of %.2f = %.2f ",num, sqr);
    
    printf("\nCube of %.2f = %.2f ",num2, cube);
    

    
    printf("\n");
    return 0;
}
