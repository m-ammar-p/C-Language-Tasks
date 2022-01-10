#include <stdio.h>
#include <math.h>

int main() {
   
    //For the following equation 3x4 + 4x3 + x2 + 7x + 9, substitute the user provided value of x and
    float x,one,two,three,four,five,sum;
    
    printf("Equation: 3x4 + 4x3 + x2 + 7x + 9\n");
    printf("Enter The Value Of X : ");
    scanf("%f",&x);
    
    one = (3 * pow(x, 4));
    two = (4 * pow(x, 3));
    three = pow(x, 2);
    four = 7 * x;
    five = 9;
    
    sum = one + two + three + four + five;
    
    printf("Answer: %.2f",sum);
    
    printf("\n");
    return 0;
}
